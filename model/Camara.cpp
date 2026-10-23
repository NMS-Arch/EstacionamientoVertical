#include "pch.h"
#include "Camara.h"

using namespace modelPrincipal;

Camara::Camara(int id_sensor, bool est)
    : Sensor(id_sensor, est)
{
}

void Camara::inicioGrabar() {}
void Camara::finGrabar() {}
void Camara::Foto() {}