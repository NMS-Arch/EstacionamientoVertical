#include "pch.h"
#include "ControlUsuarios.h"



List<Usuario^>^ controllerPrincipal::ControlUsuario::ObtenerTodos() {
    return persistance::CargarUsuariosBD();
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