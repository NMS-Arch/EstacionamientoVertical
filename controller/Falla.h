#pragma once
using namespace System;

public ref class Falla {
private:
    String^ descripcion;
    int prioridad;
    int id;
    String^ fecha;
    String^ hora;

public:
    Falla(int id_falla, String^ desc, int prio, String^ fec, String^ hor);
};