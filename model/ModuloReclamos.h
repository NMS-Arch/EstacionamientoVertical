#pragma once
#include "Reclamo.h"
using namespace System::Collections::Generic;

namespace modelPrincipal {
    public ref class ModuloReclamos {
    private:
        List<Reclamo^>^ listaReclamos;

    public:
        ModuloReclamos();
    };
}