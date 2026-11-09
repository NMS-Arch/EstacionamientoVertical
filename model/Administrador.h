//#pragma once
//#include "Usuario.h"
//
//#include "Reclamo.h" 
//
//using namespace System;
//
//namespace modelPrincipal {
//    public ref class Administrador : public Usuario {
//    public:
//        Administrador(int dni, String^ nom, int ed, String^ sex) : Usuario(dni, nom, ed, sex) {};
//		Administrador() {};
//
//        void verReclamos();
//        void verFinanzas();
//        void finalizarReclamo(Reclamo^ id);
//    };
//}




#pragma once
#include "Empleado.h"

namespace modelPrincipal {

    public ref class Administrador : public Empleado {
    public:
        // Atributo específico del administrador
        property String^ NivelAcceso; // Ej: "SuperAdmin", "Auditor", "Gerente"

        // Constructor por defecto exigido por el serializador XML
        Administrador() : Empleado() {}

        // Constructor parametrizado inyectando a la clase base
        Administrador(int id, int dni, String^ nombre,String^ rol, String^ turno, String^ estado, String^ user, String^ pass, String^ nivel)
            : Empleado(id, dni, nombre,rol, turno, estado, user, pass) {
            this->Rol = "Administrador";
            this->NivelAcceso = nivel;
        }

        // Despacho dinámico para la interfaz gráfica
        virtual String^ ObtenerTipo() override {
            return Rol;
        }



        //void verReclamos();
        //void verFinanzas();
        //void finalizarReclamo(Reclamo^ id);
    };
}