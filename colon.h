#pragma once
#include <iostream>
#include <sstream>
#include "tipoCambio.h"
using namespace std;

class colon : public moneda
{
private:
public:
    colon(/* args */);
    ~colon();
    double conversionColon(tipoCambio);
};
};

