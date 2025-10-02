#include <iostream>
#include <sstream>
using namespace std;

class pacienteCovid: public Fecha
{
protected:
    int cedula;
    string nombre;
    string telefono;
    int numComirbilidades;
    
public:
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
