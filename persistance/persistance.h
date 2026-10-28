#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::Xml::Serialization;
using namespace System::IO;


namespace persistancePrincipal {	
	public ref class persistance
	{
	public:
		//Espacios

		static String^ rutaEspacios = "espacios.xml";
		static List<Espacio^>^ cargarEspacios();
		static void guardarEspacios(List<Espacio^>^ espacios);

		//fallas

		static String^ rutaFallas = "fallas.xml";
		static List<Falla^>^ cargarFallas();
		static void guardarFallas(List<Falla^>^ fallas);

		//tickets

		static String^ rutaTickets = "tickets.xml";
		static List<TicketAuto^>^ cargarTickets();
		static void guardarTickets(List<TicketAuto^>^ tickets);

		//reclamos

		static String^ rutaReclamos = "reclamos.xml";
		static List<Reclamo^>^ cargarReclamos();
		static void guardarReclamos(List<Reclamo^>^ reclamos);

		//clientes

		static String^ rutaClientes = "clientes.xml";
		static List<Cliente^>^ cargarClientes();
		static void guardarClientes(List<Cliente^>^ clientes);

		//empleados

		static String^ rutaUsuarios = "empleados.xml";
		static List<Usuario^>^ cargarUsuarios();
		static void guardarUsuarios(List<Usuario^>^ usuarios);

	};
}
