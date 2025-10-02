#include <iostream>
#include "Motor.h"
#include "mCDiesel.h"
#include "mElectrico.h"
#include "mCGasolina.h"

using namespace std;

int main(){
    
    Motor motor;
    mCDiesel diesel1;
    mElectrico electrico1;
    mCGasolina gasolina1;
    electrico1.setAmperage(1.5);
    gasolina1.setOctanaje(90);
    diesel1.setPotencia(180);
    cout<<electrico1.toString()<<endl;
    cout<<gasolina1.toString()<<endl;
    cout<<diesel1.toString()<<endl;
    
}