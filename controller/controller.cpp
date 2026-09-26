#include "pch.h"

#include "controller.h"

//ESPACIO

void controller::controller::agregarEspacio(bool ocupado, bool est) {
	int maxId = 0;
	for each (Espacio ^ esp in controller::controller::Espacios) {
		if (esp->id > maxId) {
			maxId = esp->id;
		}
	}
	int id = maxId + 1;

	Espacio^ nEspacio = gcnew Espacio(id, ocupado, est);
	controller::controller::Espacios->Add(nEspacio);
	//Console::WriteLine("Se añadió el espacio: id {0}, ocupado {1}, est {2}.\n", id, ocupado, est);
}
bool controller::controller::eliminarEspacio(int id) {
	for (int i = 0; i < controller::controller::Espacios->Count; i++) {
		if (controller::controller::Espacios[i]->id == id) {
			controller::controller::Espacios->RemoveAt(i);
			return true;
		}
	}
	return false;
}
bool controller::controller::modificarEspacio(int id, bool ocupado, bool est) {
	for (int i = 0; i < controller::controller::Espacios->Count; i++) {
		if (controller::controller::Espacios[i]->id == id) {
			controller::controller::Espacios[i]->ocupado = ocupado;
			controller::controller::Espacios[i]->estado = est;
			return true;
			/*Console::WriteLine("Se actualizó la estacion de id {0} a: nombre {1}, tipo {2}, estado {3}, ubicacion {4}.", id, nombre, tipo, estado, ubicacion);*/
		}
	}

	return false;
}
Espacio^ controller::controller::buscarEspacio(int id) {
	for (int i = 0; i < controller::controller::Espacios->Count; i++) {
		if (controller::controller::Espacios[i]->id == id) {
			Espacio^ esp = controller::controller::Espacios[i];
			return esp;
		}
	}
	return nullptr;
}


//EMPLEADOS	

void controller::controller::agregarUsuario(int dni, String^ nom, int ed, String^ sex, int auth) {

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

	controller::controller::Usuarios->Add(nUsuario);
	//Console::WriteLine("Se añadió el usuario: dni {0}, nombre {1}, edad {2}, sexo {3}, autorizacion {4}.\n", dni, nom, ed, sex, auth);
}

bool controller::controller::eliminarUsuario(int dni) {
	for (int i = 0; i < controller::controller::Usuarios->Count; i++) {
		if (controller::controller::Usuarios[i]->DNI == dni) {
			controller::controller::Usuarios->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::controller::modificarUsuario(int dni, String^ nom, int ed, String^ sex, int auth) {
	for (int i = 0; i < controller::controller::Usuarios->Count; i++) {
		if (controller::controller::Usuarios[i]->DNI == dni) {
			Usuario^ usuario = controller::controller::Usuarios[i];
			usuario->nombre = nom;
			usuario->edad = ed;
			usuario->sexo = sex;
			usuario->autorizacion = auth;
			return true;
		}
	}
	return false;
}

Usuario^ controller::controller::buscarUsuario(int dni) {
	for (int i = 0; i < controller::controller::Usuarios->Count; i++) {
		if (controller::controller::Usuarios[i]->DNI == dni) {
			Usuario^ usuario = controller::controller::Usuarios[i];
			return usuario;
		}
	}
	return nullptr;
}

//CLIENTES

void controller::controller::agregarCliente(int dni, String^ nom, int ed, String^ sex, int auth, bool vip) {

	Cliente^ nCliente = gcnew Cliente(dni, nom, ed, sex, auth, vip);

	controller::controller::Clientes->Add(nCliente);
	//Console::WriteLine("Se añadió el cliente: dni {0}, nombre {1}, edad {2}, sexo {3}, autorizacion {4}, vip {5}.\n", dni, nom, ed, sex, auth, vip);
}

bool controller::controller::eliminarCliente(int dni) {
	for (int i = 0; i < controller::controller::Clientes->Count; i++) {
		if (controller::controller::Clientes[i]->DNI == dni) {
			controller::controller::Clientes->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::controller::modificarCliente(int dni, String^ nom, int ed, String^ sex, int auth, bool vip) {
	for (int i = 0; i < controller::controller::Clientes->Count; i++) {
		if (controller::controller::Clientes[i]->DNI == dni) {
			Cliente^ cliente = controller::controller::Clientes[i];
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

Cliente^ controller::controller::buscarCliente(int dni) {
	for (int i = 0; i < controller::controller::Clientes->Count; i++) {
		if (controller::controller::Clientes[i]->DNI == dni) {
			Cliente^ cliente = controller::controller::Clientes[i];
			return cliente;
		}
	}
	return nullptr;
}

//FALLAS

void controller::controller::agregarFalla(int id_falla, String^ desc, int prio, String^ fec, String^ hor) {
	Falla^ nFalla = gcnew Falla(id_falla, desc, prio, fec, hor);
	controller::controller::Fallas->Add(nFalla);
}

bool controller::controller::eliminarFalla(int id) {
	for (int i = 0; i < controller::controller::Fallas->Count; i++) {
		if (controller::controller::Fallas[i]->id == id) {
			controller::controller::Fallas->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::controller::modificarFalla(int id, String^ desc, int prio, String^ fec, String^ hor) {
	for (int i = 0; i < controller::controller::Fallas->Count; i++) {
		if (controller::controller::Fallas[i]->id == id) {
			Falla^ falla = controller::controller::Fallas[i];
			falla->descripcion = desc;
			falla->prioridad = prio;
			falla->fecha = fec;
			falla->hora = hor;
			return true;
		}
	}
	return false;
}

Falla^ controller::controller::buscarFalla(int id) {
	for (int i = 0; i < controller::controller::Fallas->Count; i++) {
		if (controller::controller::Fallas[i]->id == id) {
			Falla^ falla = controller::controller::Fallas[i];
			return falla;
		}
	}
	return nullptr;
}

//TICKETS

void controller::controller::agregarTicket(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec) {
	TicketAuto^ nTicket = gcnew TicketAuto(id_ticket, cli, mod, pla, prec);
	controller::controller::Tickets->Add(nTicket);
}

bool controller::controller::eliminarTicket(int id_ticket) {
	for (int i = 0; i < controller::controller::Tickets->Count; i++) {
		if (controller::controller::Tickets[i]->id == id_ticket) {
			controller::controller::Tickets->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::controller::modificarTicket(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec) {
	for (int i = 0; i < controller::controller::Tickets->Count; i++) {
		if (controller::controller::Tickets[i]->id == id_ticket) {
			TicketAuto^ ticket = controller::controller::Tickets[i];
			ticket->clienteAsociado = cli;
			ticket->modeloAuto = mod;
			ticket->placa = pla;
			ticket->precio = prec;
			return true;
		}
	}
	return false;
}

TicketAuto^ controller::controller::buscarTicket(int id_ticket) {
	for (int i = 0; i < controller::controller::Tickets->Count; i++) {
		if (controller::controller::Tickets[i]->id == id_ticket) {
			TicketAuto^ ticket = controller::controller::Tickets[i];
			return ticket;
		}
	}
	return nullptr;
}

//RECLAMOS

void controller::controller::agregarReclamo(int id_reclamo, String^ fec, String^ hor, String^ desc) {
	Reclamo^ nReclamo = gcnew Reclamo(id_reclamo, fec, hor, desc);
	controller::controller::Reclamos->Add(nReclamo);
}

bool controller::controller::eliminarReclamo(int id_reclamo) {
	for (int i = 0; i < controller::controller::Reclamos->Count; i++) {
		if (controller::controller::Reclamos[i]->id == id_reclamo) {
			controller::controller::Reclamos->RemoveAt(i);
			return true;
		}
	}
	return false;
}

bool controller::controller::modificarReclamo(int id_reclamo, String^ fec, String^ hor, String^ desc) {
	for (int i = 0; i < controller::controller::Reclamos->Count; i++) {
		if (controller::controller::Reclamos[i]->id == id_reclamo) {
			Reclamo^ reclamo = controller::controller::Reclamos[i];
			reclamo->fecha = fec;
			reclamo->hora = hor;
			reclamo->descripcion = desc;
			return true;
		}
	}
	return false;
}

Reclamo^ controller::controller::buscarReclamo(int id_reclamo) {
	for (int i = 0; i < controller::controller::Reclamos->Count; i++) {
		if (controller::controller::Reclamos[i]->id == id_reclamo) {
			Reclamo^ reclamo = controller::controller::Reclamos[i];
			return reclamo;
		}
	}
	return nullptr;
}