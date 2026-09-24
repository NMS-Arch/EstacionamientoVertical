#include "pch.h"
#include "Sensor.h"

Sensor::Sensor(int id_sensor, bool est) {
    this->id = id_sensor;
    this->estado = est;
}
void Sensor::encender() {
}

void Sensor::apagar() {
}