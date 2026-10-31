
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
		

		static List<RegistroFinanciero^>^ listaRegistrosFinancieros;


	public:
		static ControlReporteFinanciero() {
			listaRegistrosFinancieros = persistance::cargarRegistros();

		}

		static void agregarRegistroFin(RegistroFinanciero^ registroFin_entrada);
		static void eliminarRegistroFin(int id_registroFin);
		static void modificarRegistroFin(int id_registroFin, RegistroFinanciero^ registroFin_entrada);

		static RegistroFinanciero^ buscarRegistroFin(int id_registroFin);

		//static TicketAuto^ buscarTicket_codigo(String^ codigo_entrada);
		//static TicketAuto^ buscarTicket_dni(int dni_entrada);
		//static TicketAuto^ buscarTicket_placa(String^ placa_entrada);


		static List<RegistroFinanciero^>^ listarRegistroFin();

		//static void guardarReporte();
		//static List<TicketAuto^>^ cargarTReporte();



		//static void OcuparEspacio(int idBuscado);

		//static List<Espacio^>^ ObtenerEspaciosDisponibles();

		//static List<Espacio^>^ ObtenerTodosEspacios();

		//static void solicitarDescensoPlataforma(int idEspacio);

		//static void inhabiltarEspacio(int idEspacio);
		//static void habilitarEspacio(int idEspacio);
		//static void espacioEnMantenimiento(int idEspacio);


		//static int obtenerEstadoMotorPrincipal();
		//static void paraEmergenciaGeneral();
		//static void restablecerSistema();
		//static void MotorEnMantenimiento();


	};
}
