
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
        static List<Empleado^>^ ObtenerEmpleados(); // Nuevo: Retorna Operadores, Administradores y Mantenimiento
        static List<Cliente^>^ ObtenerClientes();   // Nuevo: Retorna únicamente Clientes Externos


        static Empleado^ ValidarCredenciales(String^ usuario, String^ password);

        static void cambiarEstadoEmpleado(int idEmpleado, String^ nuevoEstado);

        List<Empleado^>^ ObtenerEmpleadosActivos();

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