#include "fecha.h"

Fecha::Fecha(int d, int m, int a){
    this-> dia = d;
    this-> mes = m;
    this-> anio = a;
}

Fecha::~Fecha(){

}


void fecha::setDia(int d) {
    dia = d;
}

void fecha::setMes(int m) {
    mes = m;
}

void fecha::setAnio(int a) {
    anio = a;
}


int fecha::getDia() {
    return dia;
}

int fecha::getMes() {
    return mes;
}

int fecha::getAnio() {
    return anio;
}

bool fecha::fechaMayor(fecha* otraFecha) {
    if (anio > otraFecha->getAnio()) return true;
    if (anio == otraFecha->getAnio() && mes > otraFecha->getMes()) return true;
    if (anio == otraFecha->getAnio() && mes == otraFecha->getMes() && dia > otraFecha->getDia()) return true;
    return false;
}

