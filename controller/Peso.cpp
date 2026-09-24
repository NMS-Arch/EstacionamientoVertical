#include "pch.h"
#include "Peso.h"

Peso::Peso(int id_sensor, bool est, double pMedido)
    : Sensor(id_sensor, est)
{
    this->pesoMedido = pMedido;
}
double Peso::pesar() {
    return 0.0; 
}