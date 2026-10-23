#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;


namespace controllerPrincipal {
	public ref class controller
	{
	public:
		//espacio
		static List<Espacio^>^ Espacios = gcnew List<Espacio^>();

		static void agregarEspacio(bool ocupado, bool est);
		static bool eliminarEspacio(int id);
		static bool modificarEspacio(int id, bool ocupado, bool est);
		static Espacio^ buscarEspacio(int id);

		static void guardarEspacios();
		static List<Espacio^>^ cargarEspacios();

		//empleados

		static List<Usuario^>^ Usuarios = gcnew List<Usuario^>();

		static void agregarUsuario(String^ tipo, String^ nom, int ed, String^ sex);
		static bool eliminarUsuario(int dni);
		static bool modificarUsuario(int dni, String^ nom, int ed, String^ sex);
		static Usuario^ buscarUsuario(int dni);

		static void guardarUsuarios();
		static List<Usuario^>^ cargarUsuarios();


		//clientes

		static List<Cliente^>^ Clientes = gcnew List<Cliente^>();

		static void agregarCliente(int dni, String^ nom, int ed, String^ sex, bool vip);
		static bool eliminarCliente(int dni);
		static bool modificarCliente(int dni, String^ nom, int ed, String^ sex, bool vip);
		static Cliente^ buscarCliente(int dni);

		static void guardarClientes();
		static List<Cliente^>^ cargarClientes();

		//fallas

		static List<Falla^>^ Fallas = gcnew List<Falla^>();

		static void agregarFalla(String^ desc, int prio, String^ fec, String^ hor);
		static bool eliminarFalla(int id_falla);
		static bool modificarFalla(int id_falla, String^ desc, int prio, String^ fec, String^ hor);
		static Falla^ buscarFalla(int id_falla);

		static void guardarFallas();
		static List<Falla^>^ cargarFallas();

		//tickets

		static List<TicketAuto^>^ Tickets = gcnew List<TicketAuto^>();

		static void agregarTicket(Cliente^ cli, String^ mod, String^ pla, double prec, String^ fecha, String^ hora);
		static bool eliminarTicket(int id_ticket);
		static bool modificarTicket(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec);
		static TicketAuto^ buscarTicket(int id_ticket);

		static void guardarTickets();
		static List<TicketAuto^>^ cargarTickets();

		//reclamos

		static List<Reclamo^>^ Reclamos = gcnew List<Reclamo^>();

		static void agregarReclamo(String^ fec, String^ hor, String^ desc);
		static bool eliminarReclamo(int id_reclamo);
		static bool modificarReclamo(int id_reclamo, String^ fec, String^ hor, String^ desc);
		static Reclamo^ buscarReclamo(int id_reclamo);

		static void guardarReclamos();
		static List<Reclamo^>^ cargarReclamos();

	};
}
