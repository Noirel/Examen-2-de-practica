#include <iostream>
#include <sstream>
#include "pacienteCovid.h"

using namespace std;

class ContenedorL: public pacienteCovid {

protected:

    ContenedorL* siguiente;

public:

    ContenedorL();
    ~ContenedorL();

    ContenedorL* getSiguiente();
    void setSiguiente(ContenedorL* sig);

    void ingresaPrimero(pacienteCovid* ptrPac);
    bool eliminarPacientesCon(int numComorb);
    void ordenaPacientesPorFecha();
    string toString();
};

