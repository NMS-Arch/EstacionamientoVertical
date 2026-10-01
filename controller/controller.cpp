#include "pch.h"

#include "controller.h"
using namespace controllerPrincipal;
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
	//Console::WriteLine("Se añadió el espacio: id {0}, ocupado {1}, est {2}.\n", id, ocupado, est);
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
			/*Console::WriteLine("Se actualizó la estacion de id {0} a: nombre {1}, tipo {2}, estado {3}, ubicacion {4}.", id, nombre, tipo, estado, ubicacion);*/
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


//EMPLEADOS	

void controller::agregarUsuario(int dni, String^ nom, int ed, String^ sex, int auth) {

	Usuario^ nUsuario;

	switch (auth) {
	case 1:
		nUsuario = gcnew Operador(dni, nom, ed, sex, auth);
		break;

	case 2:
		nUsuario = gcnew Mantenimiento(dni, nom, ed, sex, auth);
		break;

	case 3:
		nUsuario = gcnew Administrador(dni, nom, ed, sex, auth);
		break;

	default:
		nUsuario = nullptr;
		break;
	}

	controller::Usuarios->Add(nUsuario);
	//Console::WriteLine("Se añadió el usuario: dni {0}, nombre {1}, edad {2}, sexo {3}, autorizacion {4}.\n", dni, nom, ed, sex, auth);
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

bool controller::modificarUsuario(int dni, String^ nom, int ed, String^ sex, int auth) {
	for (int i = 0; i < controller::Usuarios->Count; i++) {
		if (controller::Usuarios[i]->DNI == dni) {
			Usuario^ usuario = controller::Usuarios[i];
			usuario->nombre = nom;
			usuario->edad = ed;
			usuario->sexo = sex;
			usuario->autorizacion = auth;
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

//CLIENTES

void controller::agregarCliente(int dni, String^ nom, int ed, String^ sex, int auth, bool vip) {

	Cliente^ nCliente = gcnew Cliente(dni, nom, ed, sex, auth, vip);

	controller::Clientes->Add(nCliente);
	//Console::WriteLine("Se añadió el cliente: dni {0}, nombre {1}, edad {2}, sexo {3}, autorizacion {4}, vip {5}.\n", dni, nom, ed, sex, auth, vip);
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

bool controller::modificarCliente(int dni, String^ nom, int ed, String^ sex, int auth, bool vip) {
	for (int i = 0; i < controller::Clientes->Count; i++) {
		if (controller::Clientes[i]->DNI == dni) {
			Cliente^ cliente = controller::Clientes[i];
			cliente->nombre = nom;
			cliente->edad = ed;
			cliente->sexo = sex;
			cliente->autorizacion = auth;
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

//FALLAS

void controller::agregarFalla(int id_falla, String^ desc, int prio, String^ fec, String^ hor) {
	Falla^ nFalla = gcnew Falla(id_falla, desc, prio, fec, hor);
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

//TICKETS

void controller::agregarTicket(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec) {
	TicketAuto^ nTicket = gcnew TicketAuto(id_ticket, cli, mod, pla, prec);
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

//RECLAMOS

void controller::agregarReclamo(int id_reclamo, String^ fec, String^ hor, String^ desc) {
	Reclamo^ nReclamo = gcnew Reclamo(id_reclamo, fec, hor, desc);
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