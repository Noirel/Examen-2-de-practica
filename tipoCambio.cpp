#include "tipoCambio.h"

tipoCambio::tipoCambio(){
this->moneda="N/A";
this->cantidad=0.0;
}

tipoCambio::tipoCambio(string moneda, double cantidad)
{
this->moneda=moneda;
this->cantidad=cantidad;
}

void tipoCambio::setMoneda(string moneda)
{
this->moneda=moneda;
}

void tipoCambio::setCantidad(double cantidad)
{
this->cantidad=cantidad;
}

tipoCambio::~tipoCambio(){

}

double tipoCambio::obtenerValorDeCambio(string moneda, double cantidad) {
    double tasa = 0.0;
    if (moneda == "USD" || moneda == "dólares") {
        tasa = 540.0;
    }
    else if (moneda == "CRC" || moneda == "colones") {
        tasa = 0.0028;
    }
    else{
        return 0.0;
    }
    return cantidad * tasa;
}