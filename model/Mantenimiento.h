//#pragma once
//#include "Usuario.h"
//
//namespace modelPrincipal {
//    public ref class Mantenimiento : public Usuario {
//    public:
//        Mantenimiento(int dni, String^ nom, int ed, String^ sex) : Usuario(dni, nom, ed, sex) {};
//
//        Mantenimiento() {};
//
//        void activarEstacionamiento();
//        void desactivarEstacionamiento();
//        void finalizarFalla(int idFalla);
//        void activarEspacio(int idEspacio);
//        void desactivarEspacio(int idEspacio);
//    };
//}



#pragma once
#include "Empleado.h"

namespace modelPrincipal {

    public ref class Mantenimiento : public Empleado {
    public:
        property String^ EspecialidadTecnica; // Ej: "Electrónica", "Mecánica"

        Mantenimiento() : Empleado() {}

        Mantenimiento(int id, int dni, String^ nombre,String^ rol, String^ turno, String^ estado, String^ user, String^ pass, String^ especialidad)
            : Empleado(id, dni, nombre,rol, turno, estado, user, pass) {
            this->Rol = "Mantenimiento";
            this->EspecialidadTecnica = especialidad;
        }

        virtual String^ ObtenerTipo() override {
            return "Mantenimiento";
        }
    };
}