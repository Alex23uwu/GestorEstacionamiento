/**
 * Project Untitled
 */


#pragma once
#include "Empleado.h"

using namespace System;

namespace Model {
    public ref class Veedor : public Empleado {
    public:
        int Id;
        String^ Experiencia;

        void Anotate();
    };
}
