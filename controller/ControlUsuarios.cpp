#include "pch.h"
#include "ControlUsuarios.h"



List<Usuario^>^ controllerPrincipal::ControlUsuario::ObtenerTodos() {
    return persistance::CargarUsuariosBD();
}



List<Empleado^>^ controllerPrincipal::ControlUsuario::ObtenerEmpleados() {
    List<Empleado^>^ listaEmpleados = gcnew List<Empleado^>();
    List<Usuario^>^ todos = ObtenerTodos();

    for each (Usuario ^ usu in todos) {
        // Inspección polimórfica: Si 'usu' es Operador, Administrador o Mantenimiento,
        // el downcast a la clase base intermedia Empleado^ tendrá éxito.
        Empleado^ emp = dynamic_cast<Empleado^>(usu);
        if (emp != nullptr) {
            listaEmpleados->Add(emp);
        }
    }

    return listaEmpleados;
}

List<Cliente^>^ controllerPrincipal::ControlUsuario::ObtenerClientes() {
    List<Cliente^>^ listaClientes = gcnew List<Cliente^>();
    List<Usuario^>^ todos = ObtenerTodos();

    for each (Usuario ^ usu in todos) {
        // Inspección polimórfica: Filtra y convierte únicamente las instancias de Cliente^
        Cliente^ cli = dynamic_cast<Cliente^>(usu);
        if (cli != nullptr) {
            listaClientes->Add(cli);
        }
    }

    return listaClientes;
}





Empleado^ controllerPrincipal::ControlUsuario::ValidarCredenciales(String^ usuario, String^ password) {
    if (String::IsNullOrWhiteSpace(usuario) || String::IsNullOrWhiteSpace(password)) {
        return nullptr;
    }

    // Traemos únicamente a los Empleados (Operadores, Administradores y Mantenimiento) desde SQL Server
    List<Empleado^>^ empleados = ObtenerEmpleados();

    for each (Empleado ^ emp in empleados) {
        // Verificamos coincidencia exacta de credenciales
        if (emp->NombreUsuario == usuario && emp->PasswordUsuario == password) {

            // Regla de Negocio adicional: Un empleado Inactivo o Suspendido no puede entrar al sistema
            // Validación de Estado de Cuenta
            if (emp->Estado == "De Baja") {
                throw gcnew Exception("Acceso suspendido: El usuario '" + usuario + "' se encuentra actualmente De Baja.");
            }
            else if (emp->Estado == "Despedido") {
                throw gcnew Exception("Acceso denegado: Esta cuenta ha sido deshabilitada permanentemente.");
            }
            else if (emp->Estado != "Activo") {
                throw gcnew Exception("Acceso denegado: Estado de usuario no válido (" + emp->Estado + ").");
            }

            return emp; // Retorna el objeto polimórfico real (Operador^, Administrador^ o Mantenimiento^)
        }
    }

    return nullptr; // Credenciales no coinciden con ningún registro en SQL Server
}




void controllerPrincipal::ControlUsuario::cambiarEstadoEmpleado(int idEmpleado, String^ nuevoEstado) {
    Usuario^ usu = BuscarUsuario(idEmpleado);
    Empleado^ emp = dynamic_cast<Empleado^>(usu);

    if (emp == nullptr) {
        throw gcnew Exception("El ID seleccionado no corresponde a un empleado.");
    }

    // Mutamos el estado en memoria y sincronizamos inmediatamente en SQL Server
    emp->Estado = nuevoEstado;
    persistance::ActualizarUsuariosBD(emp);
}




List<Empleado^>^ controllerPrincipal::ControlUsuario::ObtenerEmpleadosActivos() {
    List<Empleado^>^ activos = gcnew List<Empleado^>();
    for each (Empleado^ emp in ObtenerEmpleados()) {
        if (emp->Estado == "Activo") {
            activos->Add(emp);
        }
    }
    return activos;
}






Usuario^ controllerPrincipal::ControlUsuario::BuscarUsuario(int idBuscado) {
    List<Usuario^>^ actuales = ObtenerTodos();
    for each (Usuario ^ usu in actuales) {
        if (usu->Id == idBuscado) {
            return usu;
        }
    }
    return nullptr;
}

Usuario^ controllerPrincipal::ControlUsuario::BuscarAvanzado(String^ criterio, int valorBuscado) {
    List<Usuario^>^ actuales = ObtenerTodos();
    for each (Usuario ^ usu in actuales) {
        if (criterio == "DNI" && usu->DNI == valorBuscado) {
            return usu;
        }
        else if (criterio == "ID" && usu->Id == valorBuscado) {
            return usu;
        }
    }
    return nullptr;
}

List<Usuario^>^ controllerPrincipal::ControlUsuario::FiltrarPorTipo(String^ tipoBuscado) {
    List<Usuario^>^ listaFiltrada = gcnew List<Usuario^>();
    List<Usuario^>^ todos = ObtenerTodos();

    for each (Usuario ^ usu in todos) {
        // Despacho dinámico puro: cada subclase responde quién es sin usar dynamic_cast
        if (usu->ObtenerTipo() == tipoBuscado) {
            listaFiltrada->Add(usu);
        }
    }
    return listaFiltrada;
}

// =========================================================================
// OPERACIONES CRUD MUTADORAS CON VALIDACIÓN DE REGLAS DE NEGOCIO
// =========================================================================

void controllerPrincipal::ControlUsuario::RegistrarUsuario(Usuario^ nuevoUsuario) {
    // Regla de Negocio: El DNI no puede duplicarse en la base de datos
    List<Usuario^>^ actuales = ObtenerTodos();
    for each (Usuario ^ usu in actuales) {
        if (usu->DNI == nuevoUsuario->DNI) {
            throw gcnew Exception("Error: Ya existe un usuario registrado con el DNI " + nuevoUsuario->DNI);
        }
    }

    // Delegamos a SQL Server; IDENTITY(1,1) asigna el Id y GuardarUsuariosBD lo inyecta en nuevoUsuario->Id
    persistance::GuardarUsuariosBD(nuevoUsuario);
}

bool controllerPrincipal::ControlUsuario::ModificarUsuario(int idOriginal, Usuario^ datosNuevos) {
    List<Usuario^>^ actuales = ObtenerTodos();
    bool existe = false;

    for each (Usuario ^ usu in actuales) {
        if (usu->Id == idOriginal) {
            existe = true;
        }
        // Validamos que el nuevo DNI no choque con otro usuario distinto
        else if (usu->DNI == datosNuevos->DNI) {
            throw gcnew Exception("Error: El DNI " + datosNuevos->DNI + " ya pertenece a otro usuario.");
        }
    }

    if (!existe) return false;

    // El ID jamás muta
    datosNuevos->Id = idOriginal;
    persistance::ActualizarUsuariosBD(datosNuevos);
    return true;
}

bool controllerPrincipal::ControlUsuario::EliminarUsuario(int idBuscado) {
    Usuario^ existente = BuscarUsuario(idBuscado);
    if (existente == nullptr) return false;

    persistance::EliminarUsuariosBD(idBuscado);
    return true;
}

// =========================================================================
// MÉTODO MUTADOR DE NEGOCIO (EJEMPLO DE MUTACIÓN DE ESTADO + UPDATE)
// =========================================================================

void controllerPrincipal::ControlUsuario::SumarPuntosCliente(int idCliente, int puntosGanados) {
    Usuario^ usu = BuscarUsuario(idCliente);
    Cliente^ cli = dynamic_cast<Cliente^>(usu);

    if (cli == nullptr) {
        throw gcnew Exception("El usuario seleccionado no es un Cliente Externo.");
    }

    cli->PuntosFidelidad += puntosGanados;
    persistance::ActualizarUsuariosBD(cli);
}