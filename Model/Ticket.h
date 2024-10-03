/**
 * Project Untitled
 */



#pragma once
#include "Vehiculo.h"
#include "DetalleTicket.h"

using namespace System;
namespace Model {
        public ref class Ticket {
    public: 
        int Id;
        double CantTotal;
        String^ TipoPago;
        DateTime Dia;
        Vehiculo^ GeneradoA;
        DetalleTicket^ Detalle;
    };
}
