#include "pch.h"
#include "ModuloEspacios.h"

using namespace modelPrincipal;

ModuloEspacios::ModuloEspacios() {
    arrayEspacios = gcnew array<Espacio^>(8);
    for (int i = 0; i < 8; i++) {
        arrayEspacios[i] = gcnew Espacio(i + 1, false, true,false);
    }
}

void ModuloEspacios::AsignarEspacio() {
}