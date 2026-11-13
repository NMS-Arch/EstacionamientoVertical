
//// Importamos TODOS los modelos necesarios
//#include "Usuario.h"
//#include "Cliente.h"
//#include "Operador.h"
//#include "Administrador.h"
//#include "Mantenimiento.h"
//// Importamos la Persistencia Estricta
//#include "GestorArchivo.h"
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace persistancePrincipal;
using namespace System::Xml;

namespace controllerPrincipal {

    public ref class ControlUsuario {
    public:
        // Consultas directas a SQL Server (Stateless)
        static List<Usuario^>^ ObtenerTodos();
        static Usuario^ BuscarUsuario(int idBuscado);
        static Usuario^ BuscarAvanzado(String^ criterio, int valorBuscado);
        static List<Usuario^>^ FiltrarPorTipo(String^ tipoBuscado);

        // Operaciones CRUD con reglas de negocio
        static void RegistrarUsuario(Usuario^ nuevoUsuario);
        static bool ModificarUsuario(int idOriginal, Usuario^ datosNuevos);
        static bool EliminarUsuario(int idBuscado);

        // Método Mutador de Negocio (Ej. Fidelización de Clientes o Suspensión de Empleados)
        static void SumarPuntosCliente(int idCliente, int puntosGanados);
    };
}