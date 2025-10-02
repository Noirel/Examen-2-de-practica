#pragma once
#include <iostream>
#include <sstream>
#include "moneda.h"
using namespace std;

class dolar : public moneda {
private:
    float cant;
public:
    dolar();
    dolar(float);
    ~dolar();
    void setCant(float cant);
    float getCant();
    

    double conversion(tipoCambio* TC);
};

