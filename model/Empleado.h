#pragma once
#include "Usuario.h"

namespace modelPrincipal {

    public ref class Empleado abstract : public Usuario {
    public:
        property String^ Rol;
        property String^ Turno;
        
        property String^ Estado;
        property String^ NombreUsuario;
        property String^ PasswordUsuario;

        Empleado() : Usuario() {}

        Empleado(int id, int dni, String^ nombre, String^ rol, String^ turno, String^ estado, String^ user, String^ pass)
            : Usuario(id, dni, nombre) {
            this->Rol = rol;
            this->Turno = turno;
            this->Estado = estado;
            this->NombreUsuario = user;
            this->PasswordUsuario = pass;
        }

        // No sobrescribimos ObtenerTipo() aquí porque Empleado sigue siendo abstracto.
        // Le pasamos esa responsabilidad a las subclases concretas.
    };
}
