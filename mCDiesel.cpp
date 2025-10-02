#include "mCDiesel.h"

mCDiesel::mCDiesel() : mCombustible(), potencia(0.0f) {}

mCDiesel::mCDiesel(string marca, string numSerie, double precio, string tipo, float potencia) : mCombustible(marca, numSerie, precio, tipo), potencia(potencia)
{}
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
string mCDiesel::toString()
{
    stringstream s;
    s << "Potencia: " << getPotencia() << " HP" << endl;
    return s.str();
}