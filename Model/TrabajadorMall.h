/**
 * Project Untitled
 */


#pragma once
#include "Cliente.h"



using namespace System;

namespace Model {
    public ref class TrabajadorMall : public Cliente {
    public:
        bool EsTrabajdor ;
        String^ Funcion;
    };
}

