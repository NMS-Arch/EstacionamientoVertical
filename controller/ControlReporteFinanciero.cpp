#include "pch.h"
#include "ControlReporteFinanciero.h"




void controllerPrincipal::ControlReporteFinanciero::agregarRegistroFin(RegistroFinanciero^ registroFin_entrada) {

	int maxId = 0;
	for each (RegistroFinanciero^ regFin in listaRegistrosFinancieros) {

		if (regFin->id_registro > maxId) {
			maxId = regFin->id_registro;
		}
	}

	registroFin_entrada->id_registro = maxId + 1;

	listaRegistrosFinancieros->Add(registroFin_entrada);

	persistance::guardarRegistros(listaRegistrosFinancieros);
}

void controllerPrincipal::ControlReporteFinanciero::eliminarRegistroFin(int id_registroFin_entrada) {
	for (int i = 0; i < listaRegistrosFinancieros->Count; i++) {
		if (listaRegistrosFinancieros[i]->id_registro == id_registroFin_entrada) {
			listaRegistrosFinancieros->RemoveAt(i);

			persistance::guardarRegistros(listaRegistrosFinancieros);
		}
	}

}

void controllerPrincipal::ControlReporteFinanciero::modificarRegistroFin(int id_registroFin_entrada, RegistroFinanciero^ registroFin_modificado) {

	for (int i = 0; i < listaRegistrosFinancieros->Count; i++) {

		if (listaRegistrosFinancieros[i]->id_registro == id_registroFin_entrada) {

			listaRegistrosFinancieros[i] = registroFin_modificado;
			persistance::guardarRegistros(listaRegistrosFinancieros);
		}
	}

}

RegistroFinanciero^ controllerPrincipal::ControlReporteFinanciero::buscarRegistroFin(int id_registroFin_entrada) {
	for (int i = 0; i < listaRegistrosFinancieros->Count; i++) {
		if (listaRegistrosFinancieros[i]->id_registro == id_registroFin_entrada) {
			return listaRegistrosFinancieros[i];
			//persistance::guardarTickets(Tickets);
		}
	}
	return nullptr;
}

//
//TicketAuto^ controllerPrincipal::ControlReporteFinanciero::buscarTicket_codigo(String^ codigo_entrada) {
//	for (int i = 0; i < controller::Tickets->Count; i++) {
//		if (Tickets[i]->codigoBarras == codigo_entrada) {
//			return Tickets[i];
//			//persistance::guardarTickets(Tickets);
//		}
//	}
//	return nullptr;
//}
//TicketAuto^ controllerPrincipal::ControlReporteFinanciero::buscarTicket_dni(int dni_entrada) {
//	for (int i = 0; i < controller::Tickets->Count; i++) {
//		if (Tickets[i]->dni == dni_entrada) {
//			return Tickets[i];
//			//persistance::guardarTickets(Tickets);
//		}
//	}
//	return nullptr;
//}
//TicketAuto^ controllerPrincipal::ControlReporteFinanciero::buscarTicket_placa(String^ placa_entrada) {
//	for (int i = 0; i < controller::Tickets->Count; i++) {
//		if (Tickets[i]->placa == placa_entrada) {
//			return Tickets[i];
//			//persistance::guardarTickets(Tickets);
//		}
//	}
//	return nullptr;
//}



List<RegistroFinanciero^>^ controllerPrincipal::ControlReporteFinanciero::listarRegistroFin() {
	return listaRegistrosFinancieros;
}


//void controllerPrincipal::ControlReporteFinanciero::guardarTickets() {
//	persistance::guardarTickets(controller::Tickets);
//}
//
//List<TicketAuto^>^ controllerPrincipal::ControlReporteFinanciero::cargarTickets() {
//	return persistance::cargarTickets();
//}
