#pragma once
#include "Sensor.h"

public ref class Peso : public Sensor {
private:
    double pesoMedido;

public:
    Peso(int id_sensor, bool est, double pMedido);

    double pesar();
};
