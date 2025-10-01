#pragma once
#include <iostream>
using namespace std;

class mCDiesel {

private:

float potencia;

public:

    mCDiesel();
    mCDiesel(float);
    ~mCDiesel();

    void setPotencia(float);
    float getPotencia();
};