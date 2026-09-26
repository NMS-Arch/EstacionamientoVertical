#pragma once
using namespace System;

public ref class Falla {
public:
    String^ descripcion;
    int prioridad;
    int id;
    String^ fecha;
    String^ hora;

    Falla(int id_falla, String^ desc, int prio, String^ fec, String^ hor) {
        this->id = id_falla;
        this->descripcion = desc;
        this->prioridad = prio;
        this->fecha = fec;
        this->hora = hor;
    }
};