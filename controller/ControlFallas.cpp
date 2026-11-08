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
			
			lista_fallas[i]->espacioAfectado = falla_entrada->espacioAfectado;
			lista_fallas[i]->descripcion = falla_entrada->descripcion;
			lista_fallas[i]->prioridad = falla_entrada->prioridad;
			lista_fallas[i]->estado = falla_entrada->estado;
			lista_fallas[i]->tipo = falla_entrada->tipo;

			persistance::guardarFallas(lista_fallas);
			return;
		}
	}
	
	throw gcnew Exception("El registro de falla que se busca no se logra encontrar");

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