#include <iostream>
#include <sstream>
using namespace std;

class fecha
{
private:

    int dia;
    int mes;
    int anio;
public:

    fecha(/* args */);
    ~fecha();

    void setDia(int);
    void setMes(int);
    void setAnio(int);
    int getDia();
    int getMes();
    int getAnio();
};

