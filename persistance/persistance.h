#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::Xml::Serialization;
using namespace System::IO;
using namespace System::Data::SqlClient;


namespace persistancePrincipal {	
	public ref class persistance
	{
	private:
		static String^ RUTA_CONFIGURACION_DB = "configuracion_db.txt";
		static SqlConnection^ obtenerConexion();
	public:
		//Espacios

		static String^ rutaEspacios = "espacios.xml";
		static List<Espacio^>^ cargarEspacios();
		static void guardarEspacios(List<Espacio^>^ espacios);
		static void GuardarEspaciosBD(Espacio^ espacio);
		static void ActualizarEspaciosBD(Espacio^ espacio);
		static void EliminarEspaciosBD(int id);
		static List<Espacio^>^ CargarEspaciosBD();

		//fallas

		static String^ rutaFallas = "fallas.xml";
		static List<Falla^>^ cargarFallas();
		static void guardarFallas(List<Falla^>^ fallas);
		static void GuardarFallasBD(Falla^ falla);
		static void ActualizarFallasBD(Falla^ falla);
		static void EliminarFallasBD(int id);
		static List<Falla^>^ CargarFallasBD();

		//tickets

		static String^ rutaTickets = "tickets.xml";
		static List<TicketAuto^>^ cargarTickets();
		static void guardarTickets(List<TicketAuto^>^ tickets);
		static void GuardarTicketsBD(TicketAuto^ ticket);
		static void ActualizarTicketsBD(TicketAuto^ ticket);
		static void EliminarTicketsBD(int id);
		static List<TicketAuto^>^ CargarTicketsBD();

		//reclamos

		static String^ rutaReclamos = "reclamos.xml";
		static List<Reclamo^>^ cargarReclamos();
		static void guardarReclamos(List<Reclamo^>^ reclamos);
		static void GuardarReclamosBD(Reclamo^ reclamo);
		static void ActualizarReclamosBD(Reclamo^ reclamo);
		static void EliminarReclamosBD(int id);
		static List<Reclamo^>^ CargarReclamosBD();

		//clientes

		static String^ rutaClientes = "clientes.xml";
		static List<Cliente^>^ cargarClientes();
		static void guardarClientes(List<Cliente^>^ clientes);
		static void GuardarClientesBD(Cliente^ cliente);
		static void ActualizarClientesBD(Cliente^ cliente);
		static void EliminarClientesBD(int id);
		static List<Cliente^>^ CargarClientesBD();

		//empleados

		static String^ rutaUsuarios = "empleados.xml";
		static List<Usuario^>^ cargarUsuarios();
		static void guardarUsuarios(List<Usuario^>^ usuarios);
		static void GuardarEmpleadosBD(Usuario^ usuario);
		static void ActualizarEmpleadosBD(Usuario^ usuario);
		static void EliminarEmpleadosBD(int id);
		static List<Usuario^>^ CargarEmpleadosBD();

		//reporteFinancieros

		static String^ rutaRegistrosFinancieros = "registrosFinancieros.xml";
		static List<RegistroFinanciero^>^ cargarRegistros();
		static void guardarRegistros(List<RegistroFinanciero^>^ registros);
		static void GuardarRegistrosBD(RegistroFinanciero^ registro);
		static void ActualizarRegistrosBD(RegistroFinanciero^ registro);
		static void EliminarRegistrosBD(int id);
		static List<RegistroFinanciero^>^ CargarRegistrosBD();

	};
}
