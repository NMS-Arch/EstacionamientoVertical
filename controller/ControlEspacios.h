#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::Xml;
using namespace persistancePrincipal;


namespace controllerPrincipal {

	public ref class ControlEspacios
	{
	private:
		static int numeroEspacios = 10;

		static int Operativo = 1;
		static int No_Operativo = 2;
		static int En_Mantenimiento = 3;


		static List<Espacio^>^ listaEspacios;

		static void InicilizarEspaciosFisicos(int numeroEspacios);
		
		static int estadoMotorPrincipal;

	public:
		static ControlEspacios() {
			listaEspacios = persistance::cargarEspacios();

			if (listaEspacios->Count == 0 || listaEspacios->Count < numeroEspacios ) {
				InicilizarEspaciosFisicos(numeroEspacios);
				Console::WriteLine("Verificando que se inicializo los espacios");
			}

			estadoMotorPrincipal = Operativo;
		}

		

		static void OcuparEspacio(int idBuscado);

		static List<Espacio^>^ ObtenerEspaciosDisponibles();


		static void solicitarDescensoPlataforma(int idEspacio);

		static void inhabiltarEspacio(int idEspacio);
		static void habilitarEspacio(int idEspacio);
		static void espacioEnMantenimiento(int idEspacio);


		static void paraEmergenciaGeneral();
		static void restablecerSistema();
		static void MotorEnMantenimiento();

	};
}
