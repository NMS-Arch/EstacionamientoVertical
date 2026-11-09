#pragma once
//// Importamos TODOS los modelos necesarios
//#include "Usuario.h"
//#include "Cliente.h"
//#include "Operador.h"
//#include "Administrador.h"
//#include "Mantenimiento.h"
//// Importamos la Persistencia Estricta
//#include "GestorArchivo.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace persistancePrincipal;
using namespace System::Xml;

namespace controllerPrincipal {

    public ref class ControlUsuario {
    private:
        // Nuestra base de datos en RAM
        static List<Usuario^>^ listaUsuarios;

    public:
        // Constructor: Cumple el requisito de cargar automáticamente al iniciar
        static ControlUsuario() {
            // "Al iniciar la aplicación, cargar automáticamente..." 
            listaUsuarios = persistance::cargarUsuarios();

            // Si el archivo no existía, aseguramos que la lista no sea nula
            if (listaUsuarios == nullptr) {
                listaUsuarios = gcnew List<Usuario^>();
            }
        }

        // Método de Consulta General
        static List<Usuario^>^ ObtenerTodos();

        // 1. AGREGAR (Recibe el objeto ya instanciado desde la GUI polimórficamente)
        static void RegistrarUsuario(Usuario^ nuevoUsuario);

        // 2. BUSCAR
        static Usuario^ BuscarUsuario(int dniBuscado);

        // 3. ELIMINAR
        static bool EliminarUsuario(int dni);

        // 4. MODIFICAR (Recibe el DNI original y el objeto con los nuevos datos)
        static bool ModificarUsuario(int dniOriginal, Usuario^ datosNuevos);

        List<Usuario^>^ FiltrarPorTipo(String^ tipoBuscado);

        Usuario^ BuscarAvanzado(String^ criterio, int valorBuscado);
    };
}