#include "pch.h"

#include "controller.h"
using namespace controllerPrincipal;
using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace persistancePrincipal;

//ESPACIO

void controller::agregarEspacio(bool ocupado, bool est) {
	int maxId = 0;
	for each (Espacio ^ esp in controller::Espacios) {
		if (esp->id > maxId) {
			maxId = esp->id;
		}
	}
	int id = maxId + 1;

	Espacio^ nEspacio = gcnew Espacio(id, ocupado, est);
	controller::Espacios->Add(nEspacio);
}
bool controller::eliminarEspacio(int id) {
	for (int i = 0; i < controller::Espacios->Count; i++) {
		if (controller::Espacios[i]->id == id) {
			controller::Espacios->RemoveAt(i);
			return true;
		}
	}
	return false;
}
bool controller::modificarEspacio(int id, bool ocupado, bool est) {
	for (int i = 0; i < controller::Espacios->Count; i++) {
		if (controller::Espacios[i]->id == id) {
			controller::Espacios[i]->ocupado = ocupado;
			controller::Espacios[i]->estado = est;
			return true;
		}
	}

	return false;
}
Espacio^ controller::buscarEspacio(int id) {
	for (int i = 0; i < controller::Espacios->Count; i++) {
		if (controller::Espacios[i]->id == id) {
			Espacio^ esp = controller::Espacios[i];
			return esp;
		}
	}
	return nullptr;
}

void controller::guardarEspacios() {
	persistance::guardarEspacios(controller::Espacios);
}

List<Espacio^>^ controller::cargarEspacios() {
	return persistance::cargarEspacios();
}


//EMPLEADOS	

void controller::agregarUsuario(String^ tipo, String^ nom, int ed, String^ sex) {

	int maxId = 0;
	for each(Usuario ^ usu in controller::Usuarios) {
		if (usu->DNI > maxId) {
			maxId = usu->DNI;
		}
	}
	int id = maxId + 1;

	Usuario^ nUsuario = nullptr;

	if (tipo == "Administrador") {
		Console::WriteLine("Creando un Administrador");
		nUsuario = gcnew Administrador(id, nom, ed, sex);
	}
	else if (tipo == "Mantenimiento") {
		Console::WriteLine("Creando un Mantenimiento");
		nUsuario = gcnew Mantenimiento(id, nom, ed, sex);
	}
	else if (tipo == "Operador") {
		Console::WriteLine("Creando un Operador");
		nUsuario = gcnew Operador(id, nom, ed, sex);
	}
	else {
		return;
	}

	controller::Usuarios->Add(nUsuario);
}


bool controller::eliminarUsuario(int dni) {
	for (int i = 0; i < controller::Usuarios->Count; i++) {
		if (controller::Usuarios[i]->DNI == dni) {
			controller::Usuarios->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::modificarUsuario(int dni, String^ nom, int ed, String^ sex) {
	for (int i = 0; i < controller::Usuarios->Count; i++) {
		if (controller::Usuarios[i]->DNI == dni) {
			Usuario^ usuario = controller::Usuarios[i];
			usuario->nombre = nom;
			usuario->edad = ed;
			usuario->sexo = sex;
			return true;
		}
	}
	return false;
}

Usuario^ controller::buscarUsuario(int dni) {
	for (int i = 0; i < controller::Usuarios->Count; i++) {
		if (controller::Usuarios[i]->DNI == dni) {
			Usuario^ usuario = controller::Usuarios[i];
			return usuario;
		}
	}
	return nullptr;
}

void controller::guardarUsuarios() {
	persistance::guardarUsuarios(controller::Usuarios);
}

List<Usuario^>^ controller::cargarUsuarios() {
	return persistance::cargarUsuarios();
}


//CLIENTES

void controller::agregarCliente(int dni, String^ nom, int ed, String^ sex, bool vip) {

	Cliente^ nCliente = gcnew Cliente(dni, nom, ed, sex, vip);

	controller::Clientes->Add(nCliente);
	//Console::WriteLine("Se añadió el cliente: dni {0}, nombre {1}, edad {2}, sexo {3}, vip {4}.\n", dni, nom, ed, sex, vip);
}

bool controller::eliminarCliente(int dni) {
	for (int i = 0; i < controller::Clientes->Count; i++) {
		if (controller::Clientes[i]->DNI == dni) {
			controller::Clientes->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::modificarCliente(int dni, String^ nom, int ed, String^ sex, bool vip) {
	for (int i = 0; i < controller::Clientes->Count; i++) {
		if (controller::Clientes[i]->DNI == dni) {
			Cliente^ cliente = controller::Clientes[i];
			cliente->nombre = nom;
			cliente->edad = ed;
			cliente->sexo = sex;
			cliente->esVIP = vip;
			return true;
		}
	}
	return false;
}

Cliente^ controller::buscarCliente(int dni) {
	for (int i = 0; i < controller::Clientes->Count; i++) {
		if (controller::Clientes[i]->DNI == dni) {
			Cliente^ cliente = controller::Clientes[i];
			return cliente;
		}
	}
	return nullptr;
}

void controller::guardarClientes() {
	persistance::guardarClientes(controller::Clientes);
}

List<Cliente^>^ controller::cargarClientes() {
	return persistance::cargarClientes();
}


//FALLAS

void controller::agregarFalla(String^ desc, int prio, String^ fec, String^ hor) {

	int maxId = 0;
	for each (Falla ^ falla in controller::Fallas) {
		if (falla->id > maxId) {
			maxId = falla->id;
		}
	}
	int id = maxId + 1;

	Falla^ nFalla = gcnew Falla(id, desc, prio, fec, hor);
	controller::Fallas->Add(nFalla);
}

bool controller::eliminarFalla(int id) {
	for (int i = 0; i < controller::Fallas->Count; i++) {
		if (controller::Fallas[i]->id == id) {
			controller::Fallas->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::modificarFalla(int id, String^ desc, int prio, String^ fec, String^ hor) {
	for (int i = 0; i < controller::Fallas->Count; i++) {
		if (controller::Fallas[i]->id == id) {
			Falla^ falla = controller::Fallas[i];
			falla->descripcion = desc;
			falla->prioridad = prio;
			falla->fecha = fec;
			falla->hora = hor;
			return true;
		}
	}
	return false;
}

Falla^ controller::buscarFalla(int id) {
	for (int i = 0; i < controller::Fallas->Count; i++) {
		if (controller::Fallas[i]->id == id) {
			Falla^ falla = controller::Fallas[i];
			return falla;
		}
	}
	return nullptr;
}

void controller::guardarFallas() {
	persistance::guardarFallas(controller::Fallas);
}

List<Falla^>^ controller::cargarFallas() {
	return persistance::cargarFallas();
}

//TICKETS

void controller::agregarTicket(Cliente^ cli, String^ mod, String^ pla, double prec, String^ fecha, String^ hora) {

	int maxId = 0;
	for each (TicketAuto ^ ticket in controller::Tickets) {
		if (ticket->id > maxId) {
			maxId = ticket->id;
		}
	}
	int id = maxId + 1;

	TicketAuto^ nTicket = gcnew TicketAuto(id, cli, mod, pla, prec, fecha, hora);
	controller::Tickets->Add(nTicket);
}

bool controller::eliminarTicket(int id_ticket) {
	for (int i = 0; i < controller::Tickets->Count; i++) {
		if (controller::Tickets[i]->id == id_ticket) {
			controller::Tickets->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::modificarTicket(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec) {
	for (int i = 0; i < controller::Tickets->Count; i++) {
		if (controller::Tickets[i]->id == id_ticket) {
			TicketAuto^ ticket =controller::Tickets[i];
			ticket->clienteAsociado = cli;
			ticket->modeloAuto = mod;
			ticket->placa = pla;
			ticket->precio = prec;
			return true;
		}
	}
	return false;
}

TicketAuto^ controller::buscarTicket(int id_ticket) {
	for (int i = 0; i < controller::Tickets->Count; i++) {
		if (controller::Tickets[i]->id == id_ticket) {
			TicketAuto^ ticket = controller::Tickets[i];
			return ticket;
		}
	}
	return nullptr;
}

void controller::guardarTickets() {
	persistance::guardarTickets(controller::Tickets);
}

List<TicketAuto^>^ controller::cargarTickets() {
	return persistance::cargarTickets();
}


//RECLAMOS

void controller::agregarReclamo(String^ fec, String^ hor, String^ desc) {

	int maxId = 0;
	for each (Reclamo ^ reclamo in controller::Reclamos) {
		if (reclamo->id > maxId) {
			maxId = reclamo->id;
		}
	}
	int id = maxId + 1;

	Reclamo^ nReclamo = gcnew Reclamo(id, fec, hor, desc);
	controller::Reclamos->Add(nReclamo);
}

bool controller::eliminarReclamo(int id_reclamo) {
	for (int i = 0; i < controller::Reclamos->Count; i++) {
		if (controller::Reclamos[i]->id == id_reclamo) {
			controller::Reclamos->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::modificarReclamo(int id_reclamo, String^ fec, String^ hor, String^ desc) {
	for (int i = 0; i < controller::Reclamos->Count; i++) {
		if (controller::Reclamos[i]->id == id_reclamo) {
			Reclamo^ reclamo = controller::Reclamos[i];
			reclamo->fecha = fec;
			reclamo->hora = hor;
			reclamo->descripcion = desc;
			return true;
		}
	}
	return false;
}

Reclamo^ controller::buscarReclamo(int id_reclamo) {
	for (int i = 0; i < controller::Reclamos->Count; i++) {
		if (controller::Reclamos[i]->id == id_reclamo) {
			Reclamo^ reclamo = controller::Reclamos[i];
			return reclamo;
		}
	}
	return nullptr;
}

void controller::guardarReclamos() {
	persistance::guardarReclamos(controller::Reclamos);
}

List<Reclamo^>^ controller::cargarReclamos() {
	return persistance::cargarReclamos();
}