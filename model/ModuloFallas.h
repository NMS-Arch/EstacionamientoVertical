#pragma once
#include "Falla.h"
using namespace System::Collections::Generic;

namespace modelPrincipal {
    public ref class ModuloFallas {
    private:
        List<Falla^>^ listaFallas;

    public:
        ModuloFallas();
    };
}