#include "pch.h"

#include "controller.h"

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
	Console::WriteLine("Se añadió el espacio: id {0}, ocupado {1}, est {2}.\n", id, ocupado, est);
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
	// Lógica para buscar un espacio
	for (int i = 0; i < controller::controller::Espacios->Count; i++) {
		if (controller::controller::Espacios[i]->id == id) {
			Espacio^ esp = controller::controller::Espacios[i];
			return esp;
		}
	}
	return nullptr;
}
