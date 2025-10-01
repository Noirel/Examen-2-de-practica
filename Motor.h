#include <iostream>
using namespace std;

class Motor{
private:
    string marca;
    string numSerie;
    double precioM;
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