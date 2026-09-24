#include "pch.h"
#include "ModuloEspacios.h"

ModuloEspacios::ModuloEspacios() {
    listaEspacios = gcnew array<Espacio^>(10);
    for (int i = 0; i < 10; i++) {
        listaEspacios[i] = gcnew Espacio(i + 1, false, true);
    }
}

void ModuloEspacios::AsignarEspacio() {
}