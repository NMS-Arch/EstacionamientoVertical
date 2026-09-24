#pragma once

public ref class Sensor {
protected:
    int id;
    bool estado;

public:
    Sensor(int id_sensor, bool est);

    void encender();
    void apagar();
};
