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


		//static List<Espacio^>^ listaEspacios;

		// Esta inializacion es algo agresiva, ya que introduce espacios por la fuerza
		// recomiendo que borres o cambies en caso de aumentar o disminuir el numero de espacios
		static void InicilizarEspaciosFisicos(int numeroEspacios);

		static Espacio^ BuscarEspacio(int idBuscado);
		
		static int estadoMotorPrincipal;

	public:
		static ControlEspacios() {
			List<Espacio^>^ espaciosActuales = ObtenerTodosEspacios();

			if (espaciosActuales->Count < numeroEspacios) {
				InicilizarEspaciosFisicos(numeroEspacios);
				Console::WriteLine("Verificando e inicializando espacios físicos en SQL Server.");
			}

			estadoMotorPrincipal = Operativo;
		}

		

		static void OcuparEspacio(int idBuscado);
		static void DesocuparEspacio(int idBuscado);


		static List<Espacio^>^ ObtenerEspaciosDisponibles();

		static List<Espacio^>^ ObtenerTodosEspacios();

		static void solicitarDescensoPlataforma(int idEspacio);

		static void inhabiltarEspacio(int idEspacio);
		static void habilitarEspacio(int idEspacio);
		static void espacioEnMantenimiento(int idEspacio);
		static int obtenerEstadoEspacio(int idEspacio);


		static int obtenerEstadoMotorPrincipal();

		static void paraEmergenciaGeneral();
		static void restablecerSistema();
		static void MotorEnMantenimiento();


	};
}
