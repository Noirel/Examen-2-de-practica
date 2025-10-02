#include "mElectrico.h"

mElectrico::mElectrico() : Motor()
{
    this->amperage=0.0;
}

mElectrico::mElectrico(float amperage, string marca, string numSerie, double precioM) : Motor(marca, numSerie, precioM)
{
    this->amperage=amperage;
}

mElectrico::~mElectrico()
{
}

void mElectrico::setAmperage(float amperage)
{
    this->amperage=amperage;
}

float mElectrico::getAmperage()
{
    return this->amperage;
}

string mElectrico::toString()
{
    stringstream s;
    s<<"Amperage: "<<getAmperage()<<endl;
    return s.str();
}
