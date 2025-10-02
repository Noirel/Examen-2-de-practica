
#pragma once
#include <iostream>
#include <sstream>
#include "tipoCambio.h"
#include "moneda.h"
using namespace std;

class colon : public moneda
{
private:
    float valor;
public:
    colon();
    ~colon();
    void setValor(float valor) { this->valor = valor; }
    double conversion(tipoCambio* TC);
};

