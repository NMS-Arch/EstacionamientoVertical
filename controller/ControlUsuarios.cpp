#include "pch.h"
#include "ControlUsuarios.h"





// Método de Consulta General
List<Usuario^>^ controllerPrincipal::ControlUsuario::ObtenerTodos() {
    return listaUsuarios;
}

// 1. AGREGAR (La regla de negocio del DNI se mantiene, pero el ID domina)
void controllerPrincipal::ControlUsuario::RegistrarUsuario(Usuario^ nuevoUsuario) {
    // Regla de Negocio: Evitar DNIs duplicados (El DNI sigue siendo único en el mundo real)
    // Aquí podrías tener un método BuscarPorDNI() solo para esta validación.
    for (int i = 0; i < listaUsuarios->Count; i++) {
        if (listaUsuarios[i]->DNI == nuevoUsuario->DNI) {
            throw gcnew Exception("Error: Ya existe un usuario registrado con el DNI " + nuevoUsuario->DNI);
        }
    }

    // Lógica de ID Autoincremental Correcta (Esta será nuestra verdadera llave primaria)
    int nuevoId = 1;
    if (listaUsuarios->Count > 0) {
        nuevoId = listaUsuarios[listaUsuarios->Count - 1]->Id + 1;
    }
    nuevoUsuario->Id = nuevoId;

    // Agregamos a la RAM
    listaUsuarios->Add(nuevoUsuario);

    // ¡SINCRONIZACIÓN AUTOMÁTICA CON DISCO!
    persistance::guardarUsuarios(listaUsuarios);
}

// 2. BUSCAR POR ID (Llave Primaria Inmutable)
Usuario^ controllerPrincipal::ControlUsuario::BuscarUsuario(int idBuscado) {
    for (int i = 0; i < listaUsuarios->Count; i++) {
        // Ahora la búsqueda del motor interno se basa en el ID
        if (listaUsuarios[i]->Id == idBuscado) {
            return listaUsuarios[i];
        }
    }
    return nullptr;
}

// 3. ELIMINAR POR ID
bool controllerPrincipal::ControlUsuario::EliminarUsuario(int idBuscado) {
    for (int i = 0; i < listaUsuarios->Count; i++) {
        if (listaUsuarios[i]->Id == idBuscado) {
            listaUsuarios->RemoveAt(i);

            // ¡SINCRONIZACIÓN AUTOMÁTICA!
            persistance::guardarUsuarios(listaUsuarios);
            return true;
        }
    }
    return false;
}

// 4. MODIFICAR POR ID (Recibe el ID inmutable y el objeto con los nuevos datos)
bool controllerPrincipal::ControlUsuario::ModificarUsuario(int idOriginal, Usuario^ datosNuevos) {
    for (int i = 0; i < listaUsuarios->Count; i++) {
        if (listaUsuarios[i]->Id == idOriginal) {

            // REGLA DE ORO: El ID jamás muta. Se lo inyectamos a la fuerza al nuevo objeto.
            // Así, si 'datosNuevos' trae una corrección de DNI, se actualizará sin problemas.
            datosNuevos->Id = listaUsuarios[i]->Id;

            // Reemplazamos el puntero en la memoria RAM
            listaUsuarios[i] = datosNuevos;

            // ¡SINCRONIZACIÓN AUTOMÁTICA!
            persistance::guardarUsuarios(listaUsuarios);
            return true;
        }
    }
    return false;
}


// 5. FILTRADO POLIMÓRFICO (Sub-listas)
List<Usuario^>^ controllerPrincipal::ControlUsuario::FiltrarPorTipo(String^ tipoBuscado) {
    // Creamos una lista temporal en la memoria RAM
    List<Usuario^>^ listaFiltrada = gcnew List<Usuario^>();

    for (int i = 0; i < listaUsuarios->Count; i++) {
        Usuario^ usu = listaUsuarios[i];

        // Gracias a la herencia y al método virtual puro que creamos antes,
        // le preguntamos al objeto quién es. No necesitamos 'dynamic_cast' aquí.
        if (usu->ObtenerTipo() == tipoBuscado) {
            listaFiltrada->Add(usu); // Agregamos la REFERENCIA a la nueva lista
        }
    }

    return listaFiltrada;
}

// 6. BÚSQUEDA DINÁMICA (Por ID o DNI)
Usuario^ controllerPrincipal::ControlUsuario::BuscarAvanzado(String^ criterio, int valorBuscado) {
    for (int i = 0; i < listaUsuarios->Count; i++) {
        Usuario^ usu = listaUsuarios[i];

        // Evaluamos el criterio que el usuario eligió en el ComboBox de la GUI
        if (criterio == "DNI" && usu->DNI == valorBuscado) {
            return usu;
        }
        else if (criterio == "ID" && usu->Id == valorBuscado) {
            return usu;
        }
    }
    // Si termina el bucle y no encontró a nadie, retorna nulo
    return nullptr;
}