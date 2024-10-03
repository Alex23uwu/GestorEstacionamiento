/**
 * Project Untitled
 */


#pragma once
using namespace System;

namespace Model {
    public ref class Reservacion {
    public:
        int Id;
        bool Permitido;
        String^ InicioReserva;
        String^ FinReserva;
    };
}
