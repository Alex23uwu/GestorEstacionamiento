/**
 * Project Untitled
 */

#pragma once
#include "Usuario.h"
#include "Vehiculo.h"
#include "Reservacion.h"

using namespace System;

namespace Model {
    public ref class Cliente : public Usuario {
    public:
         property int PuntosCliene;
         property int Descuento;
         property bool LugarReservado;
         property String^ Profession;
         property Vehiculo^ MiVehiculo;
         property Reservacion^ MiReservacion;
    };
}
