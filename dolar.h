#pragma once
#include <iostream>
#include <sstream>
#include "tipoCambio.h"
using namespace std;

class dolar : public moneda
{
private:
    
public:
    dolar(/* args */);
    ~dolar();

    double conversionDolar(tipoCambio);
};

