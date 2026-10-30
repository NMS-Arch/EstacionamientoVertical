#include "pch.h"
#include "ModuloEspacios.h"

using namespace modelPrincipal;

ModuloEspacios::ModuloEspacios() {
    arrayEspacios = gcnew array<Espacio^>(10);
    for (int i = 0; i < 10; i++) {
        arrayEspacios[i] = gcnew Espacio(i + 1, false, true,false);
    }
}

void ModuloEspacios::AsignarEspacio() {
}