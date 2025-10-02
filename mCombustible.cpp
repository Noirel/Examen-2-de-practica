#include "mCombustible.h"

mCombustible::mCombustible()
{
    this->tipo="N/A";
}

mCombustible::mCombustible(string marca, string numSerie, double precio, string tipo) : Motor(marca, numSerie, precio)
{
    this->tipo = tipo;
}

mCombustible::~mCombustible()
{ 
}

void mCombustible::setTipo(string tipo)
{
    this->tipo=tipo;
}

string mCombustible::getTipo()
{
    return tipo;
}

string mCombustible::toString()
{
    stringstream s;
    s << "Tipo: " << tipo << endl;
    return s.str();
}
