#include "pch.h"
#include "ControlFallas.h"



//FALLAS

void controllerPrincipal::ControlFallas::agregarFalla(Falla^ new_falla) {

	persistance::GuardarFallasBD(new_falla);
}

void controllerPrincipal::ControlFallas::eliminarFalla(int id_falla) {

	persistance::EliminarFallasBD(id_falla);
	

}

void controllerPrincipal::ControlFallas::modificarFalla(int id_falla, Falla^ falla_entrada) {
	
	Falla^ existente = buscarFalla(id_falla);
	if (existente == nullptr) {
		throw gcnew Exception("El registro de falla que se busca no se logra encontrar.");
	}

	falla_entrada->id = id_falla;
	persistance::ActualizarFallasBD(falla_entrada);

}

Falla^ controllerPrincipal::ControlFallas::buscarFalla(int id_falla) {
	List<Falla^>^ actuales = obtener_todos_Falla();
	for each (Falla ^ f in actuales) {
		if (f->id == id_falla) {
			return f;
		}
	}
	return nullptr;
}

List<Falla^>^ controllerPrincipal::ControlFallas::obtener_todos_Falla() {

	return persistance::CargarFallasBD();
}


/// Este metodo no esta probado, me lo sugirio la IA, la verdad le vi cierta plausibilidad, aunque lo normal es que con modificar ya se hace esto.
/// Igual lo decidi dejar por si en algun momento que remos usar algo como esto:

void controllerPrincipal::ControlFallas::cambiarEstadoFalla(int id_falla, String^ nuevoEstado) {
	Falla^ falla = buscarFalla(id_falla);
	if (falla == nullptr) {
		throw gcnew Exception("No se encontró la falla especificada para cambiar su estado.");
	}

	// Mutación del estado interno del objeto
	falla->estado = nuevoEstado;

	// Sincronización automática con SQL Server
	persistance::ActualizarFallasBD(falla);
}