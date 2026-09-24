#include "pch.h"
#include "Reclamo.h"

Reclamo::Reclamo(int id_reclamo, String^ fec, String^ hor, String^ desc) {
    this->id = id_reclamo;
    this->fecha = fec;
    this->hora = hor;
    this->descripcion = desc;
}