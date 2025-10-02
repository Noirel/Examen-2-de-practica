#include "colon.h"

colon::colon() {
    this->valor = 0.0;
}

colon::~colon() {}

double colon::conversion(tipoCambio* TC) {
    // Convert this colon amount to dollars
    return TC->obtenerValorDeCambio("CRC", this->valor);
}