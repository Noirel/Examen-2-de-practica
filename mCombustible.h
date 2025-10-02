#include <iostream>
#include <sstream>
#include "Motor.h"

using namespace std;

class mCombustible : public Motor
{
protected:
    string tipo;
public:
    mCombustible();
    mCombustible(string, string, double, string);
    virtual ~mCombustible();
    void setTipo(string);
    string getTipo();
    string toString();
};


