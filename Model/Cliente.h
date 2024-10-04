/**
 * Project Untitled
 */

#pragma once
#include "Usuario.h"
#include "Vehiculo.h"

using namespace System;

namespace Model {
    public ref class Cliente : public Usuario {
    public:
        int PuntosCliene;
        int Descuento;
        bool LugarReservado;
        String^ Profession;
        Vehiculo^ MiVehiculo;
        
    };
}
