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
        bool Completada;
        String^ InicioReserva;
        String^ FinReserva;
    };
}
