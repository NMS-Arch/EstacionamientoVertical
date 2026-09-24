#pragma once
using namespace System;

public ref class Reclamo {
private:
    String^ fecha;
    String^ hora;
    String^ descripcion;
    int id;

public:
    Reclamo(int id_reclamo, String^ fec, String^ hor, String^ desc);
};
