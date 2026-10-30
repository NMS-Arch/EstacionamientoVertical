#pragma once
#include "Espacio.h"
#include "Usuario.h"
using namespace System;

namespace modelPrincipal {
    public ref class Falla {
    public:
        Espacio^ espacioAfectado;
        Usuario^ usuarioReportante;
        String^ descripcion;
        int prioridad;
        int id;
        String^ tipo;
        DateTime fecha;
        String^ hora;

        Falla() {};

        Falla(int id_falla, String^ desc, int prio, String^ tipo, DateTime fec, 
            
            String^ hor, 
            
            Espacio^ esp, Usuario^ usr) {
            this->id = id_falla;
            this->descripcion = desc;
            this->prioridad = prio;
            this->tipo = tipo;
            this->fecha = fec;
            this->hora = hor;
            this->espacioAfectado = esp;
            this->usuarioReportante = usr;
        }
    };
}