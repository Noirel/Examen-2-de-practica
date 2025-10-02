#pragma once
#include <iostream>
#include <sstream>
#include "fecha.h"
using namespace std;

class pacienteCovid: public fecha
{
protected:
    int cedula;
    string nombre;
    string telefono;
    int numComorbilidades;
    
public:
    pacienteCovid();
    pacienteCovid(int, string, string, int);
    ~pacienteCovid();

    void setCedula(int);
    void setNombre(string);
    void setTelefono(string);
    void setNumComorbilidades(int);
    int getCedula();
    string getNombre();
    string getTelefono();
    int getNumComorbilidades();

};
