#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace controller {
	public ref class controller
	{
	public:
		//espacio
		static List<Espacio^>^ Espacios = gcnew List<Espacio^>();

		static void agregarEspacio(bool ocupado, bool est);
		static bool eliminarEspacio(int id);
		static bool modificarEspacio(int id, bool ocupado, bool est);
		static Espacio^ buscarEspacio(int id);

		//empleados

		static List<Usuario^>^ Usuarios = gcnew List<Usuario^>();

		static void agregarUsuario(int dni, String^ nom, int ed, String^ sex, int auth);
		static bool eliminarUsuario(int dni);
		static bool modificarUsuario(int dni, String^ nom, int ed, String^ sex, int auth);
		static Usuario^ buscarUsuario(int dni);

		//clientes

		static List<Cliente^>^ Clientes = gcnew List<Cliente^>();

		static void agregarCliente(int dni, String^ nom, int ed, String^ sex, int auth, bool vip);
		static bool eliminarCliente(int dni);
		static bool modificarCliente(int dni, String^ nom, int ed, String^ sex, int auth, bool vip);
		static Cliente^ buscarCliente(int dni);

		//fallas

		static List<Falla^>^ Fallas = gcnew List<Falla^>();

		static void agregarFalla(int id_falla, String^ desc, int prio, String^ fec, String^ hor);
		static bool eliminarFalla(int id_falla);
		static bool modificarFalla(int id_falla, String^ desc, int prio, String^ fec, String^ hor);
		static Falla^ buscarFalla(int id_falla);

		//tickets

		static List<TicketAuto^>^ Tickets = gcnew List<TicketAuto^>();

		static void agregarTicket(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec);
		static bool eliminarTicket(int id_ticket);
		static bool modificarTicket(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec);
		static TicketAuto^ buscarTicket(int id_ticket);

		//reclamos

		static List<Reclamo^>^ Reclamos = gcnew List<Reclamo^>();

		static void agregarReclamo(int id_reclamo, String^ fec, String^ hor, String^ desc);
		static bool eliminarReclamo(int id_reclamo);
		static bool modificarReclamo(int id_reclamo, String^ fec, String^ hor, String^ desc);
		static Reclamo^ buscarReclamo(int id_reclamo);

	};
}
