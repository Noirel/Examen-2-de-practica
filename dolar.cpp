#include "dolar.h"

dolar::dolar() {
    this->cant = 0.0;
}

dolar::dolar(float cant) {
    this->cant = cant;
}

void dolar::setCant(float cant) {
    this->cant = cant;
}

float dolar::getCant() {
    return this->cant;
}

dolar::~dolar() {}

double dolar::conversion(tipoCambio* TC) {
    return TC->obtenerValorDeCambio("USD", this->cant);
}