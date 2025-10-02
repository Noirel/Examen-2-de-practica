#include "contenedorL.h"

ContenedorL::ContenedorL() : siguiente(nullptr) {}


ContenedorL::~ContenedorL() {
    delete[] siguiente;
}

ContenedorL* ContenedorL::getSiguiente() {
    return siguiente;
}

void ContenedorL::setSiguiente(ContenedorL* sig) {
    siguiente = sig;
}

void ContenedorL::ingresaPrimero(pacienteCovid* ptrPac) {
    
    this->setCedula(ptrPac->getCedula());
    this->setNombre(ptrPac->getNombre());
    this->setTelefono(ptrPac->getTelefono());
    this->setNumComorbilidades(ptrPac->getNumComorbilidades());

    
    ContenedorL* nuevo = new ContenedorL();
    nuevo->siguiente = this->siguiente;
    this->siguiente = nuevo;
}

bool ContenedorL::eliminarPacientesCon(int numComorb) {
    ContenedorL* actual = this;
    ContenedorL* anterior = nullptr;
    bool eliminado = false;

    while (actual != nullptr) {
        if (actual->getNumComorbilidades() == numComorb) {
            if (anterior != nullptr) {
                anterior->siguiente = actual->siguiente;
                delete actual;
                actual = anterior->siguiente;
            } else {
                
                actual->setCedula(0);
                actual->setNombre("");
                actual->setTelefono("");
                actual->setNumComorbilidades(0);
                actual = actual->siguiente;
            }
            eliminado = true;
        } else {
            anterior = actual;
            actual = actual->siguiente;
        }
    }
    return eliminado;
}

string ContenedorL::toString() {
    stringstream ss;
    ContenedorL* actual = this;

    while (actual != nullptr) {
        ss << "Cedula: " << actual->getCedula()
           << ", Nombre: " << actual->getNombre()
           << ", Telefono: " << actual->getTelefono()
           << ", Comorbilidades: " << actual->getNumComorbilidades()
           << "\n";
        actual = actual->siguiente;
    }

    return ss.str();
}

void ContenedorL::ordenaPacientesPorFecha() {
    if (siguiente == nullptr) return; // Lista vacía o de un solo nodo

    bool huboCambios;
    do {
        huboCambios = false;
        ContenedorL* actual = this;

        while (actual->siguiente != nullptr) {
            ContenedorL* sig = actual->siguiente;

            if (actual->fechaMayor(sig)) {
                //Aux para almacenar
                int auxCedula = actual->getCedula();
                string auxNombre = actual->getNombre();
                string auxTelefono = actual->getTelefono();
                int auxComorb = actual->getNumComorbilidades();
                int auxDia = actual->getDia();
                int auxMes = actual->getMes();
                int auxAnio = actual->getAnio();

                // Copiar datos de sig a actual
                actual->setCedula(sig->getCedula());
                actual->setNombre(sig->getNombre());
                actual->setTelefono(sig->getTelefono());
                actual->setNumComorbilidades(sig->getNumComorbilidades());
                actual->setDia(sig->getDia());
                actual->setMes(sig->getMes());
                actual->setAnio(sig->getAnio());

                // Copiar datos auxiliares a sig
                sig->setCedula(auxCedula);
                sig->setNombre(auxNombre);
                sig->setTelefono(auxTelefono);
                sig->setNumComorbilidades(auxComorb);
                sig->setDia(auxDia);
                sig->setMes(auxMes);
                sig->setAnio(auxAnio);

                huboCambios = true;
            }
            actual = actual->siguiente;
        }
    } while (huboCambios);
}

