#include "pch.h"
#include "Falla.h"

Falla::Falla(int id_falla, String^ desc, int prio, String^ fec, String^ hor) {
    this->id = id_falla;
    this->descripcion = desc;
    this->prioridad = prio;
    this->fecha = fec;
    this->hora = hor;
}