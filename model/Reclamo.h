#pragma once
using namespace System;

namespace modelPrincipal {
    public ref class Reclamo {
    public:
        String^ fecha;
        String^ descripcion;
        int id;
        int idUser;

        Reclamo() {};

        Reclamo(int id_reclamo, String^ fec, String^ desc, int id_user) {
            this->id = id_reclamo;
            this->fecha = fec;
            this->descripcion = desc;
            this->idUser = id_user;
        }
    };
}