#include "mCGasolina.h"

mCGasolina::mCGasolina()
{
    this->octanaje=0.0;
}

mCGasolina::mCGasolina(string marca, string numSerie, double precio, string tipo, float octanaje) : mCombustible(marca, numSerie, precio, tipo)
{
    this->octanaje=octanaje;
}

mCGasolina::~mCGasolina()
{
}

void mCGasolina::setOctanaje(float octanaje)
{
    this->octanaje=octanaje;
}

float mCGasolina::getOctanaje()
{
    return octanaje;
}
