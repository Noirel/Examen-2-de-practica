#include "pacienteCovid.h"


pacienteCovid::pacienteCovid(int c, string n, string t, int numC) {
    this->cedula = c;
    this->nombre = n;
    this->telefono = t;
    this->numComorbilidades = numC;
}


pacienteCovid::~pacienteCovid() {
    
}


void pacienteCovid::setCedula(int c) {
    cedula = c;
}

void pacienteCovid::setNombre(string n) {
    nombre = n;
}

void pacienteCovid::setTelefono(string t) {
    telefono = t;
}

void pacienteCovid::setNumComorbilidades(int numC) {
    numComorbilidades = numC;
}

int pacienteCovid::getCedula() {
    return cedula;
}

string pacienteCovid::getNombre() {
    return nombre;
}

string pacienteCovid::getTelefono() {
    return telefono;
}

int pacienteCovid::getNumComorbilidades() {
    return numComorbilidades;
}