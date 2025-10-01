#include <iostream>
#include <sstream>
#include "mCGasolina.h"
#include "mCDiesel.h"

using namespace std;

class mCombustible : public mCDiesel, public mCGasolina
{
protected:
    string tipo;
public:
    mCombustible();
    ~mCombustible();
};


