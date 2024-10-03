/**
 * Project Untitled
 */

#pragma once
#include "Empleado.h"

using namespace System;

namespace Model {
    public ref class PersonalLimpieza : public Empleado {
    public:
        String^ Utensils;
        int Tips;
        String^ Estado;
        String^ Disponibilidad;
        int Id;
        PersonalLimpieza(int id) {
            Id = id;
        }
    };
}