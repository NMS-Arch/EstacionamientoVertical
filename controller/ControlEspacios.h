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
		static List<Espacio^>^ listaEspacios;
		static void InicilizarEspaciosFisicos();

	public:
		static ControlEspacios() {
			listaEspacios = persistance::cargarEspacios();

			if (listaEspacios->Count == 0) {
				InicilizarEspaciosFisicos();
			}
		}

		

		static void OcuparEspacio(int idBuscado);

		static List<Espacio^>^ ObtenerEspaciosDisponibles();



	};
}
