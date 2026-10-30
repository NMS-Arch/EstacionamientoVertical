#pragma once
#include "Cliente.h"
using namespace System;

namespace modelPrincipal {
    public ref class TicketAuto {

    public:
        Cliente^ clienteAsociado;
        String^ modeloAuto;
        String^ placa;
		DateTime fechaIngreso;
		//String^ horaIngreso;

        bool pagado;

        double precio;
        int id;

        double peso;
        int id_espacio;

        //bool RC;

        String^ codigoBarras;

        int dni;

        TicketAuto() {};

        TicketAuto(int id_ticket, Cliente^ cli, String^ mod, String^ pla, double prec, DateTime fecha, 
            //String^ hora,
            double peso,int id_espacio,
            
            //bool RC, 
            
            int Dni, String^codigoBarras) {



            this->id = id_ticket;

            this->clienteAsociado = cli;

            this->modeloAuto = mod;
            this->placa = pla;
            this->precio = prec;

            this->id_espacio = id_espacio;
            this->peso = peso;

            this->fechaIngreso = fecha;
            //this->horaIngreso = hora;
            this->pagado = false;

			//this->RC = RC;
			this->dni = Dni;

            this->codigoBarras = codigoBarras;
        }


        void generar_codigo_barras() {

            //String^ parteID; 
            String^ partePlaca; String^ parteModelo; String^ parteTiempo;

            //parteID = id.ToString();
            partePlaca = (placa->Length >= 3) ? placa->Substring(0, 3) : placa;
            parteModelo = (modeloAuto->Length >= 2) ? modeloAuto->Substring(0, 2) : modeloAuto;
            parteTiempo = fechaIngreso.ToString("HHmm");

            String^ codigoFinal =  partePlaca + parteModelo + parteTiempo;

            codigoBarras=codigoFinal->ToUpper();

            

        }
    };
}