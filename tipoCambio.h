#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class tipoCambio
{
private:
   string moneda;
   double cantidad;
public:

    tipoCambio();
    tipoCambio(string moneda, double cantidad);
    void setMoneda(string);
    void setCantidad(double);
    ~tipoCambio();
    double obtenerValorDeCambio(string moneda, double cantidad);
    
};

