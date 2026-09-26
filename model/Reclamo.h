#pragma once
using namespace System;

public ref class Reclamo {
public:
    String^ fecha;
    String^ hora;
    String^ descripcion;
    int id;

    Reclamo(int id_reclamo, String^ fec, String^ hor, String^ desc) {
        this->id = id_reclamo;
        this->fecha = fec;
        this->hora = hor;
        this->descripcion = desc;
    }
};
