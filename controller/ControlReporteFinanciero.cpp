#include "pch.h"
#include "ControlReporteFinanciero.h"




void controllerPrincipal::ControlReporteFinanciero::agregarRegistroFin(RegistroFinanciero^ registroFin_entrada) {

	persistance::GuardarRegistrosBD(registroFin_entrada);
}

void controllerPrincipal::ControlReporteFinanciero::eliminarRegistroFin(int id_registroFin_entrada) {
	persistance::EliminarRegistrosBD(id_registroFin_entrada);

}

void controllerPrincipal::ControlReporteFinanciero::modificarRegistroFin(int id_registroFin_entrada, RegistroFinanciero^ registroFin_modificado) {

	registroFin_modificado->id_registro = id_registroFin_entrada;
	persistance::ActualizarRegistrosBD(registroFin_modificado);

}

RegistroFinanciero^ controllerPrincipal::ControlReporteFinanciero::buscarRegistroFin(int id_registroFin_entrada) {
	List<RegistroFinanciero^>^ actuales = ObtenerRegistrosFin();
	for each (RegistroFinanciero ^ reg in actuales) {
		if (reg->id_registro == id_registroFin_entrada) {
			return reg;
		}
	}
	return nullptr;
}



List<RegistroFinanciero^>^ controllerPrincipal::ControlReporteFinanciero::ObtenerRegistrosFin() {
	return persistance::CargarRegistrosBD();
}


List<RegistroFinanciero^>^ controllerPrincipal::ControlReporteFinanciero::filtrarRegistrosPorPeriodo(String^ periodo) {
	List<RegistroFinanciero^>^ listaFiltrada = gcnew List<RegistroFinanciero^>();
	List<RegistroFinanciero^>^ todos = ObtenerRegistrosFin();
	DateTime hoy = DateTime::Now.Date;

	for each (RegistroFinanciero ^ reg in todos) {
		// Ignoramos registros que aún no tienen fecha de salida registrada
		if (reg->fechaHoraSalida == DateTime::MinValue) continue;

		DateTime fechaSalida = reg->fechaHoraSalida.Date;

		if (periodo == "Hoy" && fechaSalida == hoy) {
			listaFiltrada->Add(reg);
		}
		else if (periodo == "Ayer" && fechaSalida == hoy.AddDays(-1)) {
			listaFiltrada->Add(reg);
		}
		else if (periodo == "Esta Semana") {
			int diasRestar = (int)hoy.DayOfWeek - (int)DayOfWeek::Monday;
			if (diasRestar < 0) diasRestar += 7;

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
		if (reg->sePago == true) {
			totalAcumulado += reg->monto_total;
		}
	}

	return totalAcumulado;
}


List<RegistroFinanciero^>^ controllerPrincipal::ControlReporteFinanciero::filtrarPorFechaExacta(DateTime fechaBuscada) {
	List<RegistroFinanciero^>^ listaFiltrada = gcnew List<RegistroFinanciero^>();
	List<RegistroFinanciero^>^ todos = ObtenerRegistrosFin();

	for each (RegistroFinanciero ^ reg in todos) {
		if (reg->fechaHoraSalida != DateTime::MinValue && reg->fechaHoraSalida.Date == fechaBuscada.Date) {
			listaFiltrada->Add(reg);
		}
	}
	return listaFiltrada;
}