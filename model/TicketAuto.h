#pragma once
#include "Cliente.h"
using namespace System;

namespace modelPrincipal {
    public ref class TicketAuto {

    public:
        int clienteAsociado;
        String^ modeloAuto;
        String^ placa;
		DateTime fechaIngreso;
        DateTime fechaSalida;
        bool pagado;
        double precio;
        int id;
        double peso;
        int id_espacio;
        String^ codigoBarras;
        int dni;

        TicketAuto() {};

        //Sin codigo de barras (generico)
        TicketAuto(int id_ticket, int cli, String^ mod, String^ pla, double prec, DateTime fecha,
            double peso, int id_espacio,
            int Dni, DateTime fecha_salida) {
            this->id = id_ticket;
            this->clienteAsociado = cli;
            this->modeloAuto = mod;
            this->placa = pla;
            this->precio = prec;
            this->id_espacio = id_espacio;
            this->peso = peso;
            this->fechaIngreso = fecha;
            this->fechaSalida = fecha_salida;
            this->pagado = false;
            this->dni = Dni;
            this->codigoBarras = generar_codigo_barras();

        }
        //Con codigo de barras (para sql)
        TicketAuto(int id_ticket, int cli, String^ mod, String^ pla, double prec, DateTime fecha, 
            double peso,int id_espacio,
            int Dni, String^codigoBarras, DateTime fecha_salida) {
            this->id = id_ticket;            
            this->clienteAsociado = cli;
            this->modeloAuto = mod;
            this->placa = pla;
            this->precio = prec;
            this->id_espacio = id_espacio;
            this->peso = peso;
            this->fechaIngreso = fecha;
            this->fechaSalida= fecha_salida;
            this->pagado = false;
			this->dni = Dni;
            this->codigoBarras = codigoBarras;

        }


        String^ generar_codigo_barras() {

            //String^ parteID; 
            String^ partePlaca; String^ parteModelo; String^ parteTiempo;

            //parteID = id.ToString();
            partePlaca = (placa->Length >= 3) ? placa->Substring(0, 3) : placa;
            parteModelo = (modeloAuto->Length >= 2) ? modeloAuto->Substring(0, 2) : modeloAuto;
            parteTiempo = fechaIngreso.ToString("HHmm");

            String^ codigoFinal =  partePlaca + parteModelo + parteTiempo;

            codigoBarras=codigoFinal->ToUpper();
			return codigoBarras;
        }


        Double tiempoTranscurrido() {
            TimeSpan diferencia = fechaSalida - fechaIngreso;
            double horasTotales = diferencia.TotalHours;

			if (horasTotales > 24) horasTotales = 0.0; //Si es mas de un dia no es valido, voy a poner un valor predeterminado para cuando aun no paga
            return Math::Round(horasTotales,2);
        }

        Double calcularMontoFinal() {

            double horasTotalesEnterizadas = Math::Ceiling( tiempoTranscurrido() );

            if (horasTotalesEnterizadas < 1.0) horasTotalesEnterizadas = 1.0;

            return horasTotalesEnterizadas * precio;
        }
        
    };
}