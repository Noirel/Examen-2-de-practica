#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Motor{
private:
    string marca;
    string numSerie;
    double precioM;
public:
    Motor();
    Motor(string, string, double);
    ~Motor();
    void virtual setMarca(string);
    void virtual setNumSerie(string);
    void virtual setPrecioM(double);
    string virtual getMarca();
    string virtual getNumSerie();
    double virtual getPrecioM();
    string virtual toString();
};