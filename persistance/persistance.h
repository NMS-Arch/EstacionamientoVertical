#pragma once

//#include "TicketAuto.h"
//#include "Espacio.h"  // Asegúrate de incluir el header de Espacio
//#include "Falla.h"    // Asegúrate de incluir el header de Falla

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::Xml::Serialization;
using namespace System::IO;

using namespace System::Data;
using namespace System::Data::SqlClient;


namespace persistancePrincipal {	
	public ref class persistance
	{

	private:
		static String^ RUTA_CONFIGURACION_DB = "configuracion_db.txt";
		static SqlConnection^ obtenerConexion();

	public:
		//Espacios


		static void GuardarEspaciosBD(Espacio^ espacio);
		static void ActualizarEspaciosBD(Espacio^ espacio);
		static void EliminarEspaciosBD(int id);
		static List<Espacio^>^ CargarEspaciosBD();



		//fallas

		//static String^ rutaFallas = "fallas.xml";
		//static List<Falla^>^ cargarFallas();
		//static void guardarFallas(List<Falla^>^ fallas);


		static void GuardarFallasBD(Falla^ falla);
		static void ActualizarFallasBD(Falla^ falla);
		static void EliminarFallasBD(int id);
		static List<Falla^>^ CargarFallasBD();


		//tickets

		static void GuardarTicketsBD(TicketAuto^ ticket);
		static void ActualizarTicketsBD(TicketAuto^ ticket);
		static void EliminarTicketsBD(int id);
		static List<TicketAuto^>^ CargarTicketsBD();
	

		//reclamos

		static String^ rutaReclamos = "reclamos.xml";
		static List<Reclamo^>^ cargarReclamos();
		static void guardarReclamos(List<Reclamo^>^ reclamos);

		//clientes

		static String^ rutaClientes = "clientes.xml";
		static List<Cliente^>^ cargarClientes();
		static void guardarClientes(List<Cliente^>^ clientes);



		// Usuarios
		// Usuarios Polimórficos (SQL Server - ADO.NET)
		static void GuardarUsuariosBD(Usuario^ usuario);
		static void ActualizarUsuariosBD(Usuario^ usuario);
		static void EliminarUsuariosBD(int id);
		static List<Usuario^>^ CargarUsuariosBD();




		//empleados

		static String^ rutaUsuarios = "empleados.xml";
		static List<Usuario^>^ cargarUsuarios();
		static void guardarUsuarios(List<Usuario^>^ usuarios);

		//reporteFinancieros



		static void GuardarRegistrosBD(RegistroFinanciero^ registro);
		static void ActualizarRegistrosBD(RegistroFinanciero^ registro);
		static void EliminarRegistrosBD(int id);
		static List<RegistroFinanciero^>^ CargarRegistrosBD();


	};
}
