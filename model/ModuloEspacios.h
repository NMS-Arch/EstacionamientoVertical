#pragma once
#include "Espacio.h"

namespace modelPrincipal {
    public ref class ModuloEspacios {
    private:
        array<Espacio^>^ arrayEspacios;

    public:
        ModuloEspacios();

        void AsignarEspacio();
    };
}