#pragma once
#include <iostream>
#include <sstream>
#include "mCombustible.h"

using namespace std;

class mCGasolina : public mCombustible
{
private:
    float octanaje;
public:
    mCGasolina();
    mCGasolina(string, string, double, string, float);
    ~mCGasolina();
    void setOctanaje(float);
    float getOctanaje();
    string toString();
};

