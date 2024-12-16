/**
 * Project Untitled
 */


#pragma once
using namespace System;

namespace Model {
    public ref class Reservacion {
    public:
        int Id;
        bool TiempoExcedido;
        bool Completada;
        DateTime FechaReserva;
        String^ InicioReserva;
        String^ FinReserva;
        int ClienteID;
        bool IncluyePersonal;
    };
}
