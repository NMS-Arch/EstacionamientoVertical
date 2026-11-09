#include "pch.h"
#include "ControlUsuarios.h"





// Método de Consulta General
List<Usuario^>^ controllerPrincipal::UsuarioController::ObtenerTodos() {
    return listaUsuarios;
}

// 1. AGREGAR (Recibe el objeto ya instanciado desde la GUI polimórficamente)
void controllerPrincipal::UsuarioController::RegistrarUsuario(Usuario^ nuevoUsuario) {
    // Regla de Negocio: Evitar DNIs duplicados
    if (BuscarUsuario(nuevoUsuario->DNI) != nullptr) {
        throw gcnew Exception("Error: Ya existe un usuario registrado con el DNI " + nuevoUsuario->DNI);
    }

    // Lógica de ID Autoincremental Correcta
    int nuevoId = 1;
    if (listaUsuarios->Count > 0) {
        nuevoId = listaUsuarios[listaUsuarios->Count - 1]->Id + 1;
    }
    nuevoUsuario->Id = nuevoId;

    // Agregamos a la RAM
    listaUsuarios->Add(nuevoUsuario);

    // ¡SINCRONIZACIÓN AUTOMÁTICA CON DISCO! (Requisito Obligatorio)
    persistance::guardarUsuarios(listaUsuarios);
}

// 2. BUSCAR
Usuario^ controllerPrincipal::UsuarioController::BuscarUsuario(int dniBuscado) {
    for (int i = 0; i < listaUsuarios->Count; i++) {
        if (listaUsuarios[i]->DNI == dniBuscado) {
            return listaUsuarios[i];
        }
    }
    return nullptr;
}

// 3. ELIMINAR
bool controllerPrincipal::UsuarioController::EliminarUsuario(int dni) {
    for (int i = 0; i < listaUsuarios->Count; i++) {
        if (listaUsuarios[i]->DNI == dni) {
            listaUsuarios->RemoveAt(i);

            // ¡SINCRONIZACIÓN AUTOMÁTICA!
            persistance::guardarUsuarios(listaUsuarios);
            return true;
        }
    }
    return false;
}

// 4. MODIFICAR (Recibe el DNI original y el objeto con los nuevos datos)
bool controllerPrincipal::UsuarioController::ModificarUsuario(int dniOriginal, Usuario^ datosNuevos) {
    for (int i = 0; i < listaUsuarios->Count; i++) {
        if (listaUsuarios[i]->DNI == dniOriginal) {

            // Reemplazamos el objeto antiguo por el nuevo manteniendo el ID original
            datosNuevos->Id = listaUsuarios[i]->Id;
            listaUsuarios[i] = datosNuevos;

            // ¡SINCRONIZACIÓN AUTOMÁTICA!
            persistance::guardarUsuarios(listaUsuarios);
            return true;
        }
    }
    return false;
}