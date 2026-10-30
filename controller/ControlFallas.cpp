#include "pch.h"
#include "ControlFallas.h"



//FALLAS

void controllerPrincipal::ControlFallas::agregarFalla(Falla^ new_falla) {

	int maxId = 0;

	for each (Falla ^ falla in lista_fallas) {
		if (falla->id > maxId) {
			maxId = falla->id;
		}
	}
	new_falla->id = maxId + 1;

	lista_fallas->Add(new_falla);

	persistance::guardarFallas(lista_fallas);
}

void controllerPrincipal::ControlFallas::eliminarFalla(int id) {

	for (int i = 0; i < lista_fallas->Count; i++) {

		if (lista_fallas[i]->id == id) {
			lista_fallas->RemoveAt(i);
			persistance::guardarFallas(lista_fallas);
			return;
		}
	}
	

}

void controllerPrincipal::ControlFallas::modificarFalla(int id, Falla^ falla_entrada) {
	
	for (int i = 0; i < lista_fallas->Count; i++) {
		
		if (lista_fallas[i]->id == id) {
			
			lista_fallas[i] = falla_entrada;

			persistance::guardarFallas(lista_fallas);
			return;
		}
	}
	

}

Falla^ controllerPrincipal::ControlFallas::buscarFalla(int id) {
	for (int i = 0; i < lista_fallas->Count; i++) {
		if (lista_fallas[i]->id == id) {
			return lista_fallas[i];
			
		}
	}

	return nullptr;
}

List<Falla^>^ controllerPrincipal::ControlFallas::obtener_todos_Falla() {

	return lista_fallas;
}


void controllerPrincipal::ControlFallas::guardarFallas() {
	persistance::guardarFallas(lista_fallas);
}

List<Falla^>^ controllerPrincipal::ControlFallas::cargarFallas() {
	return persistance::cargarFallas();
}