#pragma once
#include "pch.h"
#include "Cliente.h"

using namespace System;

namespace modelPrincipal {
    public ref class TicketAuto {
    public:
        //Cliente^ clienteAsociado;
        //int clienteIdDB; // Almacena el ID plano cuando viene de BD
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

        TicketAuto() {
            pagado = false;
        };

        // Constructor 1: Usado desde la GUI con objeto Cliente
        TicketAuto(int id_ticket,
            //Cliente^ cli, 
            String^ mod, String^ pla, double prec, DateTime fecha,
            double peso, int id_espacio, int Dni, String^ codigoBarras, DateTime fecha_salida)
        {
            this->id = id_ticket;
           //this->clienteAsociado = cli;
           //this->clienteIdDB = (cli != nullptr) ? cli-> Id : 0;
            this->modeloAuto = mod;
            this->placa = pla;
            this->precio = prec;
            this->id_espacio = id_espacio;
            this->peso = peso;
            this->fechaIngreso = fecha;
            this->fechaSalida = fecha_salida;
            this->pagado = false;
            this->dni = Dni;
            this->codigoBarras = codigoBarras;
        }

        //// Constructor 2: Sobrecarga usada desde la Persistencia SQL (recibe idCliente int)
        //TicketAuto(int id_ticket, int idCliente, String^ mod, String^ pla, double prec, DateTime fecha,
        //    double peso, int id_espacio, int Dni, String^ codigoBarras, DateTime fecha_salida, bool isPagado)
        //{
        //    this->id = id_ticket;
        //    this->clienteAsociado = nullptr;
        //    this->clienteIdDB = idCliente;
        //    this->modeloAuto = mod;
        //    this->placa = pla;
        //    this->precio = prec;
        //    this->id_espacio = id_espacio;
        //    this->peso = peso;
        //    this->fechaIngreso = fecha;
        //    this->fechaSalida = fecha_salida;
        //    this->pagado = isPagado;
        //    this->dni = Dni;
        //    this->codigoBarras = codigoBarras;
        //}

        void generar_codigo_barras() {
            String^ partePlaca = (placa != nullptr && placa->Length >= 3) ? placa->Substring(0, 3) : (placa != nullptr ? placa : "");
            String^ parteModelo = (modeloAuto != nullptr && modeloAuto->Length >= 2) ? modeloAuto->Substring(0, 2) : (modeloAuto != nullptr ? modeloAuto : "");
            String^ parteTiempo = fechaIngreso.ToString("HHmm");
            codigoBarras = (partePlaca + parteModelo + parteTiempo)->ToUpper();
        }

        double tiempoTranscurrido() {
            TimeSpan diferencia = fechaSalida - fechaIngreso;
            return Math::Round(diferencia.TotalHours, 2);
        }

        double calcularMontoFinal() {
            double horasEnteras = Math::Ceiling(tiempoTranscurrido());
            if (horasEnteras < 1.0) horasEnteras = 1.0;
            return horasEnteras * precio;
        }
    };
}