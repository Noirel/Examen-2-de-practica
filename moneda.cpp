#include "moneda.h"

moneda::moneda()
{
    this->valor=0.0;
    
}

moneda::moneda(tipoCambio * tipoC)
{
    this->tipoC= new tipoCambio();
    this->valor=tipoC->obtenerValorDeCambio("USD", 1);
    
}

void moneda::setValor(double valor)
{
this->valor=valor;
}

double moneda::getValor()
{
    return this->valor;
}

void moneda::setTipoCambio(tipoCambio *tipoC)
{
    this->tipoC = tipoC;
}

string moneda::toString()
{
    stringstream s;
    s<<"Valor: "<<getValor()<<endl;
    return s.str();
}
