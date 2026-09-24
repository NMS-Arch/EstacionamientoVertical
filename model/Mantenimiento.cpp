#include "pch.h"
#include "Mantenimiento.h"

Mantenimiento::Mantenimiento(int dni, String^ nom, int ed, String^ sex, int auth)
    : Usuario(dni, nom, ed, sex, auth)
{
}

void Mantenimiento::activarEstacionamiento() {}
void Mantenimiento::desactivarEstacionamiento() {}
void Mantenimiento::finalizarFalla(int idFalla) {}
void Mantenimiento::activarEspacio(int idEspacio) {}
void Mantenimiento::desactivarEspacio(int idEspacio) {}