#pragma once

#include "TicketAuto.h"


using namespace System;
using namespace System::Collections::Generic;


namespace modelPrincipal {
    public ref class RegistroFinanciero {
    public:
        int id_registro;

        double monto_total;


        int id_Ticket;
        int id_espacio;

        int idUserOperario;
        String^ nombreUserOperario;

        String^ placa;
        String^ modelo;
        int DNI;
        
        double peso;
        double precioBase;

        double tiempoTotal;

        DateTime fechaHoraIngreso;
        DateTime fechaHoraSalida;


       // double totalPagado;
        
        bool sePago;



    

        RegistroFinanciero() {}

        RegistroFinanciero(int id_registro, double monto_total, int id_Ticket, int id_espacio,
            int idUserOperario, String^ nombreUserOperario, String^ placa,
            String^ modelo, int DNI, double peso, double precioBase,
            double tiempoTotal, DateTime fechaHoraIngreso, DateTime fechaHoraSalida, bool sePago
            //,double totalPagado   
            // //Aun no implementado
        )
        {
            this->id_registro = id_registro;
            this->monto_total = monto_total;
            this->id_Ticket = id_Ticket;
            this->id_espacio = id_espacio;
            this->idUserOperario = idUserOperario;
            this->nombreUserOperario = nombreUserOperario;
            this->placa = placa;
            this->modelo = modelo;
            this->DNI = DNI;
            this->peso = peso;
            this->precioBase = precioBase;
            this->tiempoTotal = tiempoTotal;
            this->fechaHoraIngreso = fechaHoraIngreso;
            this->fechaHoraSalida = fechaHoraSalida;
            this->sePago = sePago;
           
            //this->totalPagado = totalPagado; //Aun no implementado
        }

    
        RegistroFinanciero^ GenerarRegistroDesdeTicket(TicketAuto^ ticket, int idUserOperario, String^ nombreUserOperario,bool sePago
            //, double pagadoPorCliente
        
        ) {

            // 1. Aprovechamos los métodos que ya tienes en tu clase TicketAuto
            double tiempoTotal = ticket->tiempoTranscurrido();
            double montoTotal = ticket->calcularMontoFinal();

            // 2. Instanciamos el RegistroFinanciero usando el constructor con parámetros
            RegistroFinanciero^ nuevoRegistro = gcnew RegistroFinanciero(
                id_registro,             // Pasado por parámetro
                montoTotal,              // Calculado del ticket
                ticket->id,              // Del ticket
                ticket->id_espacio,      // Del ticket
                idUserOperario,          // Pasado por parámetro
                nombreUserOperario,      // Pasado por parámetro
                ticket->placa,           // Del ticket
                ticket->modeloAuto,      // Del ticket
                ticket->dni,             // Del ticket
                ticket->peso,            // Del ticket
                ticket->precio,          // Del ticket (precio base por hora)
                tiempoTotal,             // Calculado del ticket
                ticket->fechaIngreso,    // Del ticket
                ticket->fechaSalida,    // Del ticket
                sePago

                //, pagadoPorCliente         // Pasado por parámetro   , Aun no se me ocurre la forma logica de este atributo o para que seria
            );

            return nuevoRegistro;
        }


    };
}
