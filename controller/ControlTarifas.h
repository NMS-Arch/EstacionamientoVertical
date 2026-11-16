
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace modelPrincipal;
using namespace System::Xml;
using namespace persistancePrincipal;


namespace controllerPrincipal {

	public ref class ControlTarifas
	{

    //private:
    //    GestorBD^ bd;

    public:
        //ControladorTarifas();

        static void GuardarNuevaTarifa(Tarifa^ nuevaTarifa);

        static Tarifa^ ObtenerPrecioActual();

        static List<Tarifa^>^ ListarHistorialPrecios();

	};
}
