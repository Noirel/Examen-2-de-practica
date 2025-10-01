#include "mCDiesel.h"

mCDiesel::mCDiesel()
{
    this->potencia=0.0;
}

mCDiesel::mCDiesel(float potencia)
{
    this->potencia=potencia;
}

void mCDiesel::setPotencia(float potencia)
{
    this->potencia=potencia;
}

float mCDiesel::getPotencia()
{
    return potencia;
}