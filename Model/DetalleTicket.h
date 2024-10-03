/**
 * Project Untitled
 */

#pragma once
using namespace System;

namespace Model {
    public ref class DetalleTicket {
    public:
        double Cantidad;
        int Id;
        double IGV;
        String^ MetodoPago;
        String^ Fecha;
        String^ HoraEntrada;
        String^ HoraSalida;
        double Tarifa;
    };
}
