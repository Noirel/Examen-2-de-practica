#include "mElectrico.h"

mElectrico::mElectrico()
{
    this->amperage=0.0;
}

mElectrico::mElectrico(float amperage)
{
    this->amperage=amperage;
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
