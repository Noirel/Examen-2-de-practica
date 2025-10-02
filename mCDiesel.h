#pragma once
#include <iostream>
#include <sstream>
#include "mCombustible.h"
using namespace std;

class mCDiesel : public mCombustible {

private:
float potencia;
public:

    mCDiesel();
    mCDiesel(string, string, double, string, float);
    ~mCDiesel();
    void setPotencia(float);
    float getPotencia();
    string toString();
};