//#pragma once
//#include "Usuario.h"
//
//namespace modelPrincipal {
//    public ref class Operador : public Usuario {
//    public:
//        //Operador(int dni, String^ nom, int ed, String^ sex) : Usuario(dni, nom, ed, sex) {};
//        //Operador() {};
//
//        Operador() {}
//        Operador(int id, int dni, String^ nom, String^ rol, String^ turno, String^ nombre_Usuario, String^ password_Usuario) : Usuario(id, dni, nom, rol, turno, nombre_Usuario, password_Usuario) {}
//
//        void registrarTicket();
//        void hacerReclamo();
//        void realizarPago();
//    };
//}
//



#pragma once
#include "Empleado.h"

namespace modelPrincipal {

    public ref class Operador : public Empleado {
    public:
        // Atributo específico de la operación industrial
        property String^ EstacionAsignada;

        Operador() : Empleado() {}

        Operador(int id, int dni, String^ nombre,String^ rol, String^ turno, String^ estado, String^ user, String^ pass, String^ estacion)
            : Empleado(id, dni, nombre, rol,turno, estado, user, pass) {
            this->Rol = "Operador";
            this->EstacionAsignada = estacion;
        }

        virtual String^ ObtenerTipo() override {
            return Rol;
        }
    };
}