#include "Motor.h"

Motor::Motor()
{
    this->marca="N/A";
    this->numSerie="N/A";
    this->precioM=0.0;
}

Motor::Motor(string marca, string numSerie, double precioM)
{
    this->marca=marca;
    this->numSerie=numSerie;
    this->precioM=precioM;
}

Motor::~Motor()
{
}

void Motor::setMarca(string marca)
{
    this->marca=marca;
}

void Motor::setNumSerie(string numSerie)
{
    this->numSerie=numSerie;
}

void Motor::setPrecioM(double precioM)
{
    this->precioM=precioM;
}

string Motor::getMarca()
{
    return marca;
}

string Motor::getNumSerie()
{
    return numSerie;
}

double Motor::getPrecioM()
{
    return precioM;
}

string Motor::toString()
{
    stringstream s;
    s<<"Marca: "<<getMarca()<<endl;
    s<<"Numero de Serie: "<<getNumSerie()<<endl;
    s<<"Precio: "<<getPrecioM()<<endl;
return s.str();
}
