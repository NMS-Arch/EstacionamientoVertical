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
	persistance::GuardarRegistrosBD(registroFin_entrada);
	//persistance::guardarRegistros(listaRegistrosFinancieros);
}

void controllerPrincipal::ControlReporteFinanciero::eliminarRegistroFin(int id_registroFin_entrada) {
	for (int i = 0; i < listaRegistrosFinancieros->Count; i++) {
		if (listaRegistrosFinancieros[i]->id_registro == id_registroFin_entrada) {
			listaRegistrosFinancieros->RemoveAt(i);
			persistance::EliminarRegistrosBD(id_registroFin_entrada);
			//persistance::guardarRegistros(listaRegistrosFinancieros);
		}
	}

}

void controllerPrincipal::ControlReporteFinanciero::modificarRegistroFin(int id_registroFin_entrada, RegistroFinanciero^ registroFin_modificado) {

	for (int i = 0; i < listaRegistrosFinancieros->Count; i++) {

		if (listaRegistrosFinancieros[i]->id_registro == id_registroFin_entrada) {
			registroFin_modificado->id_registro = id_registroFin_entrada;
			listaRegistrosFinancieros[i] = registroFin_modificado;
			persistance::ActualizarRegistrosBD(registroFin_modificado);
			//persistance::guardarRegistros(listaRegistrosFinancieros);
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



List<RegistroFinanciero^>^ controllerPrincipal::ControlReporteFinanciero::ObtenerRegistrosFin() {
	return listaRegistrosFinancieros;
}


List<RegistroFinanciero^>^ controllerPrincipal::ControlReporteFinanciero::filtrarRegistrosPorPeriodo(String^ periodo) {
	List<RegistroFinanciero^>^ listaFiltrada = gcnew List<RegistroFinanciero^>();
	DateTime hoy = DateTime::Now.Date; // Obtiene la fecha actual a las 00:00:00

	for each (RegistroFinanciero ^ reg in listaRegistrosFinancieros) {
		DateTime fechaSalida = reg->fechaHoraSalida.Date;

		if (periodo == "Hoy" && fechaSalida == hoy) {
			listaFiltrada->Add(reg);
		}
		else if (periodo == "Ayer" && fechaSalida == hoy.AddDays(-1)) {
			listaFiltrada->Add(reg);
		}
		else if (periodo == "Esta Semana") {
			// Calcula cuál fue el lunes de esta semana
			int diasRestar = (int)hoy.DayOfWeek - (int)DayOfWeek::Monday;
			if (diasRestar < 0) diasRestar += 7; // Ajuste si hoy es domingo

			DateTime inicioSemana = hoy.AddDays(-diasRestar);
			if (fechaSalida >= inicioSemana && fechaSalida <= hoy) {
				listaFiltrada->Add(reg);
			}
		}
		else if (periodo == "Este Mes") {
			if (fechaSalida.Month == hoy.Month && fechaSalida.Year == hoy.Year) {
				listaFiltrada->Add(reg);
			}
		}
	}
	return listaFiltrada;
}





double controllerPrincipal::ControlReporteFinanciero::calcularGananciasTotales(List<RegistroFinanciero^>^ lista) {
	double totalAcumulado = 0.0;

	for each (RegistroFinanciero ^ reg in lista) {
		if (reg->sePago == true) { // Solo suma si realmente se pagó
			totalAcumulado += reg->monto_total;
		}
	}

	return totalAcumulado;
}


List<RegistroFinanciero^>^ controllerPrincipal::ControlReporteFinanciero::filtrarPorFechaExacta(DateTime fechaBuscada) {
	List<RegistroFinanciero^>^ listaFiltrada = gcnew List<RegistroFinanciero^>();

	for each (RegistroFinanciero ^ reg in listaRegistrosFinancieros) {
		if (reg->fechaHoraSalida.Date == fechaBuscada.Date) {
			listaFiltrada->Add(reg);
		}
	}
	return listaFiltrada;
}