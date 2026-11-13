
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::Xml;
using namespace persistancePrincipal;


namespace controllerPrincipal {

	public ref class ControlReporteFinanciero
	{
	private:
		

		//static List<RegistroFinanciero^>^ listaRegistrosFinancieros;


	public:
		//static ControlReporteFinanciero() {
		//	//listaRegistrosFinancieros = persistance::cargarRegistros();

		//}

		static void agregarRegistroFin(RegistroFinanciero^ registroFin_entrada);
		static void eliminarRegistroFin(int id_registroFin);
		static void modificarRegistroFin(int id_registroFin, RegistroFinanciero^ registroFin_entrada);

		static RegistroFinanciero^ buscarRegistroFin(int id_registroFin);

		


		static List<RegistroFinanciero^>^ ObtenerRegistrosFin();

		
		static List<RegistroFinanciero^>^ filtrarRegistrosPorPeriodo(String^ periodo);

		static double calcularGananciasTotales(List<RegistroFinanciero^>^ lista);

		static List<RegistroFinanciero^>^ filtrarPorFechaExacta(DateTime fechaBuscada);

	};
}
