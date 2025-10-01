#include <iostream>
#include "mCombustible.h"
#include "mElectrico.h"
using namespace std;

class Motor : public mCombustible{
private:
    string marca;
    string numSerie;
    double precioM;
    mElectrico mElectrico;
public:
    Motor();
    Motor(string, string, double);
    
    void virtual setMarca(string);
    void virtual setNumSerie(string);
    void virtual setPrecioM(double);
    string virtual getMarca();
    string virtual getNumSerie();
    double virtual getPrecioM();
    string virtual toString();
};