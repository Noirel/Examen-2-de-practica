#include "mCDiesel.h"

mCDiesel::mCDiesel()
{
    this->potencia=0.0;
}

mCDiesel::mCDiesel(string marca, string numSerie, double precio, string tipo, float potencia) : mCombustible(marca, numSerie, precio, tipo)
{
    this->potencia=potencia;
}
mCDiesel::~mCDiesel()
{
}

void mCDiesel::setPotencia(float potencia)
{
    this->potencia=potencia;
}

float mCDiesel::getPotencia()
{
    return potencia;
}