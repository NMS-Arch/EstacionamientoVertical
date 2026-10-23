#pragma once
#include "Sensor.h"

namespace modelPrincipal {
    public ref class Peso : public Sensor {
    private:
        double pesoMedido;

    public:
        Peso(int id_sensor, bool est, double pMedido);

        double pesar();
    };
}