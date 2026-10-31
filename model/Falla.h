#pragma once
#include "Espacio.h"
#include "Usuario.h"
using namespace System;

namespace modelPrincipal {
    public ref class Falla {
    public:
        //Espacio^ espacioAfectado;
        //Usuario^ usuarioReportante;

        int espacioAfectado;

        int idUserReportante;
        String^ nombreUserReportante;
        String^ rolUser;

        String^ descripcion;
        String^ prioridad;

        int id;

        String^ estado;

        String^ tipo;
        DateTime fecha;
        String^ hora;

        Falla() {};

        Falla(int id_falla, String^ desc, String^ prio, String^ tipo, DateTime fec, 
            
            //String^ hor, 
            
            //Espacio^ esp, Usuario^ usr
            
            String^ estado,
        
            int idUserReportante, String^ nombreUserReportante,String^ rolUser, int espacioAfectado) {

            this->id = id_falla;
            this->descripcion = desc;
            this->prioridad = prio;
            this->tipo = tipo;
            this->fecha = fec;
            
            //this->hora = hor;
            this->estado = estado;

            this->espacioAfectado = espacioAfectado;
            
            this->idUserReportante=idUserReportante;
            this->nombreUserReportante=nombreUserReportante;
            this->rolUser =rolUser;

            //this->espacioAfectado = esp;
            //this->usuarioReportante = usr;
        }
    };
}