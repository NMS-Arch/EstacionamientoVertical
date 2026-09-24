#include "pch.h"
#include "Espacio.h"

Espacio::Espacio(int id_espacio, bool esta_ocupado, bool est) {
    this->id = id_espacio;
    this->ocupado = esta_ocupado;
    this->estado = est;
}