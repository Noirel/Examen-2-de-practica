#pragma once
#include <iostream>
#include <sstream>
#include "tipoCambio.h"
using namespace std;

class moneda{
protected:
double valor;
tipoCambio* tipoC;
public:
    moneda();
    moneda(tipoCambio*);
    ~moneda();
    void setValor(double);
    double getValor();
    void setTipoCambio(tipoCambio* tipoC);
    virtual double conversion(tipoCambio* TC) = 0;
    string toString();
};