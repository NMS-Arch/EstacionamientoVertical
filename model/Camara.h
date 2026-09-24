#pragma once
#include "Sensor.h"

public ref class Camara : public Sensor {
public:
    Camara(int id_sensor, bool est);

    void inicioGrabar();
    void finGrabar();
    void Foto();
};
