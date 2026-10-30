#include "pch.h"

#include "controller.h"
//using namespace controllerPrincipal;
//using namespace System;
//using namespace System::Collections::Generic;


//ESPACIO

void controllerPrincipal::controller::agregarEspacio(bool ocupado, bool est) {
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
bool controllerPrincipal::controller::eliminarEspacio(int id) {
	for (int i = 0; i < controller::Espacios->Count; i++) {
		if (controller::Espacios[i]->id == id) {
			controller::Espacios->RemoveAt(i);
			return true;
		}
	}
	return false;
}
bool controllerPrincipal::controller::modificarEspacio(int id, bool ocupado, bool est) {
	for (int i = 0; i < controller::Espacios->Count; i++) {
		if (controller::Espacios[i]->id == id) {
			controller::Espacios[i]->ocupado = ocupado;
			controller::Espacios[i]->estado = est;
			return true;
		}
	}

	return false;
}
Espacio^ controllerPrincipal::controller::buscarEspacio(int id) {
	for (int i = 0; i < controller::Espacios->Count; i++) {
		if (controller::Espacios[i]->id == id) {
			Espacio^ esp = controller::Espacios[i];
			return esp;
		}
	}
	return nullptr;
}

void controllerPrincipal::controller::guardarEspacios() {
	persistance::guardarEspacios(controller::Espacios);
}

List<Espacio^>^ controllerPrincipal::controller::cargarEspacios() {
	return persistance::cargarEspacios();
}


//EMPLEADOS	

void controllerPrincipal::controller::agregarUsuario(String^ tipo, String^ nom, int ed, String^ sex) {

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


bool controllerPrincipal::controller::eliminarUsuario(int dni) {
	for (int i = 0; i < controller::Usuarios->Count; i++) {
		if (controller::Usuarios[i]->DNI == dni) {
			controller::Usuarios->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controllerPrincipal::controller::modificarUsuario(int dni, String^ nom, int ed, String^ sex) {
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

Usuario^ controllerPrincipal::controller::buscarUsuario(int dni) {
	for (int i = 0; i < controller::Usuarios->Count; i++) {
		if (controller::Usuarios[i]->DNI == dni) {
			Usuario^ usuario = controller::Usuarios[i];
			return usuario;
		}
	}
	return nullptr;
}

void controllerPrincipal::controller::guardarUsuarios() {
	persistance::guardarUsuarios(controller::Usuarios);
}

List<Usuario^>^ controllerPrincipal::controller::cargarUsuarios() {
	return persistance::cargarUsuarios();
}


//CLIENTES

void controllerPrincipal::controller::agregarCliente(int dni, String^ nom, int ed, String^ sex, bool vip) {

	Cliente^ nCliente = gcnew Cliente(dni, nom, ed, sex, vip);

	controller::Clientes->Add(nCliente);
	//Console::WriteLine("Se añadió el cliente: dni {0}, nombre {1}, edad {2}, sexo {3}, vip {4}.\n", dni, nom, ed, sex, vip);
}

bool controllerPrincipal::controller::eliminarCliente(int dni) {
	for (int i = 0; i < controller::Clientes->Count; i++) {
		if (controller::Clientes[i]->DNI == dni) {
			controller::Clientes->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controllerPrincipal::controller::modificarCliente(int dni, String^ nom, int ed, String^ sex, bool vip) {
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

Cliente^ controllerPrincipal::controller::buscarCliente(int dni) {
	for (int i = 0; i < controller::Clientes->Count; i++) {
		if (controller::Clientes[i]->DNI == dni) {
			Cliente^ cliente = controller::Clientes[i];
			return cliente;
		}
	}
	return nullptr;
}

void controllerPrincipal::controller::guardarClientes() {
	persistance::guardarClientes(controller::Clientes);
}

List<Cliente^>^ controllerPrincipal::controller::cargarClientes() {
	return persistance::cargarClientes();
}


//FALLAS

void controllerPrincipal::controller::agregarFalla(String^ desc, int prio, String^ fec, String^ hor) {

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

bool controllerPrincipal::controller::eliminarFalla(int id) {
	for (int i = 0; i < controller::Fallas->Count; i++) {
		if (controller::Fallas[i]->id == id) {
			controller::Fallas->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controllerPrincipal::controller::modificarFalla(int id, String^ desc, int prio, String^ fec, String^ hor) {
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

Falla^ controllerPrincipal::controller::buscarFalla(int id) {
	for (int i = 0; i < controller::Fallas->Count; i++) {
		if (controller::Fallas[i]->id == id) {
			Falla^ falla = controller::Fallas[i];
			return falla;
		}
	}
	return nullptr;
}

void controllerPrincipal::controller::guardarFallas() {
	persistance::guardarFallas(controller::Fallas);
}

List<Falla^>^ controllerPrincipal::controller::cargarFallas() {
	return persistance::cargarFallas();
}

////////////////////////
///		TICKETS		////
////////////////////////

void controllerPrincipal::controller::agregarTicket(TicketAuto^ ticket_entrada) {

	int maxId = 0;
	for each (TicketAuto^ ticket in Tickets) {

		if (ticket->id > maxId) {
			maxId = ticket->id;
		}
	}
	
	ticket_entrada->id = maxId + 1;

	Tickets->Add(ticket_entrada);

	persistance::guardarTickets(Tickets);
}

void controllerPrincipal::controller::eliminarTicket(int id_ticket) {
	for (int i = 0; i < Tickets->Count; i++) {
		if (Tickets[i]->id == id_ticket) {
			Tickets->RemoveAt(i);
			persistance::guardarTickets(Tickets);
		}
	}

}

void controllerPrincipal::controller::modificarTicket(int id_ticket, TicketAuto^ ticket_modificado) {
	
	for (int i = 0; i < Tickets->Count; i++) {

		if (Tickets[i]->id == id_ticket) {
			
			Tickets[i] = ticket_modificado;
			persistance::guardarTickets(Tickets);
		}
	}

}

TicketAuto^ controllerPrincipal::controller::buscarTicket(int id_ticket) {
	for (int i = 0; i < controller::Tickets->Count; i++) {
		if (Tickets[i]->id == id_ticket) {
			return Tickets[i];
			//persistance::guardarTickets(Tickets);
		}
	}
	return nullptr;
}


TicketAuto^ controllerPrincipal::controller::buscarTicket_codigo(String^ codigo_entrada) {
	for (int i = 0; i < controller::Tickets->Count; i++) {
		if (Tickets[i]->codigoBarras == codigo_entrada) {
			return Tickets[i];
			//persistance::guardarTickets(Tickets);
		}
	}
	return nullptr;
}
TicketAuto^ controllerPrincipal::controller::buscarTicket_dni(int dni_entrada) {
	for (int i = 0; i < controller::Tickets->Count; i++) {
		if (Tickets[i]->dni == dni_entrada) {
			return Tickets[i];
			//persistance::guardarTickets(Tickets);
		}
	}
	return nullptr;
}
TicketAuto^ controllerPrincipal::controller::buscarTicket_placa(String^ placa_entrada) {
	for (int i = 0; i < controller::Tickets->Count; i++) {
		if (Tickets[i]->placa== placa_entrada) {
			return Tickets[i];
			//persistance::guardarTickets(Tickets);
		}
	}
	return nullptr;
}



List<TicketAuto^>^ controllerPrincipal::controller::listarTickets() {
	return Tickets;
}


void controllerPrincipal::controller::guardarTickets() {
	persistance::guardarTickets(controller::Tickets);
}

List<TicketAuto^>^ controllerPrincipal::controller::cargarTickets() {
	return persistance::cargarTickets();
}


//RECLAMOS

void controllerPrincipal::controller::agregarReclamo(String^ fec, String^ hor, String^ desc) {

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

bool controllerPrincipal::controller::eliminarReclamo(int id_reclamo) {
	for (int i = 0; i < controller::Reclamos->Count; i++) {
		if (controller::Reclamos[i]->id == id_reclamo) {
			controller::Reclamos->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controllerPrincipal::controller::modificarReclamo(int id_reclamo, String^ fec, String^ hor, String^ desc) {
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

Reclamo^ controllerPrincipal::controller::buscarReclamo(int id_reclamo) {
	for (int i = 0; i < controller::Reclamos->Count; i++) {
		if (controller::Reclamos[i]->id == id_reclamo) {
			Reclamo^ reclamo = controller::Reclamos[i];
			return reclamo;
		}
	}
	return nullptr;
}

void controllerPrincipal::controller::guardarReclamos() {
	persistance::guardarReclamos(controller::Reclamos);
}

List<Reclamo^>^ controllerPrincipal::controller::cargarReclamos() {
	return persistance::cargarReclamos();
}