#pragma once
#include "Espacio.h"

public ref class ModuloEspacios {
private:
    array<Espacio^>^ listaEspacios; 

public:
    ModuloEspacios();

    void AsignarEspacio(); 
};