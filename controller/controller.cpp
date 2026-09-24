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


//USUARIOS

void controller::controller::agregarUsuario(int dni, String^ nom, int ed, String^ sex, int auth, bool vip) {

	Usuario^ nUsuario;

	switch (auth) {
	case 0:
		nUsuario = gcnew Cliente(dni, nom, ed, sex, auth, vip);
		break;

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

bool controller::controller::modificarUsuario(int dni, String^ nom, int ed, String^ sex, int auth, bool vip) {
	for (int i = 0; i < controller::controller::Usuarios->Count; i++) {
		if (controller::controller::Usuarios[i]->DNI == dni) {
			Usuario^ usuario = controller::controller::Usuarios[i];
			usuario->nombre = nom;
			usuario->edad = ed;
			usuario->sexo = sex;
			usuario->autorizacion = auth;
			if (auth == 0) {
				Cliente^ cliente = dynamic_cast<Cliente^>(usuario);
				if (cliente != nullptr) {
					cliente->esVIP = vip;
				}
			}
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