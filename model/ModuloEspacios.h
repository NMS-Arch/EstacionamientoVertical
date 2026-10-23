#pragma once
#include "Espacio.h"

namespace modelPrincipal {
    public ref class ModuloEspacios {
    private:
        array<Espacio^>^ listaEspacios;

    public:
        ModuloEspacios();

        void AsignarEspacio();
    };
}