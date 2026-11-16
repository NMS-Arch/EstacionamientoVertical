

#pragma once

using namespace System;
using namespace System::Xml::Serialization;


namespace modelPrincipal {
    public ref class Tarifa {
    private:
        int idTarifa;
        double precioBase;
        double pesoUmbral;
        double precioAdicional;
        DateTime fechaRegistro;

    public:
        // Constructor completo para cuando leemos de la BD
        Tarifa(int id, double base, double umbral, double adicional, DateTime fecha) {
            this->idTarifa = id;
            this->precioBase = base;
            this->pesoUmbral = umbral;
            this->precioAdicional = adicional;
            this->fechaRegistro = fecha;
        }

        // Constructor simplificado para cuando el usuario ingresa en la GUI
        Tarifa(double base, double umbral, double adicional) {
            this->precioBase = base;
            this->pesoUmbral = umbral;
            this->precioAdicional = adicional;
            // El ID y la Fecha los generará SQL Server automáticamente
        }


        Tarifa(){}

        // Propiedades GET/SET  (C++/CLI)
        property int IdTarifa {
            int get() { return idTarifa; }
            void set(int value) { idTarifa = value; }
        }

        property double PrecioBase {
            double get() { return precioBase; }
            void set(double value) { precioBase = value; }
        }

        property double PesoUmbral {
            double get() { return pesoUmbral; }
            void set(double value) { pesoUmbral = value; }
        }

        property double PrecioAdicional {
            double get() { return precioAdicional; }
            void set(double value) { precioAdicional = value; }
        }

        property DateTime FechaRegistro {
            DateTime get() { return fechaRegistro; }
            void set(DateTime value) { fechaRegistro = value; }
        }
    };
}