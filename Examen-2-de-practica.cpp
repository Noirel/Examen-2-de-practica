#include <iostream>
#include "Motor.h"
#include "mCDiesel.h"
#include "mElectrico.h"
#include "mCGasolina.h"
#include "tipoCambio.h"
#include "dolar.h"
#include "colon.h"
#include "moneda.h"
#include "tipoCambio.h"

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
    system("pause");

    int opcion;
    cout<<"Que transaccion desea realizar?"<<endl;
    cout<<"1. Covertir a colones"<<endl;
    cout<<"2. Convertir a dolares"<<endl;
    cin>>opcion;
    if(opcion==1){
        double cantidad;
        cout<< "Sin utilizar puntos ni comas ingrese la cantidad en dolares que quiere convertir: "<<endl;
        cin>>cantidad;
        dolar d(cantidad);
        tipoCambio tc;
        double colones = d.conversion(&tc);
        cout << "Equivalente en colones: " << colones << endl;
    }
    else if(opcion==2){
        double cantidad;
        cout<< "Sin utilizar puntos ni comas ingrese la cantidad en colones que quiere convertir: "<<endl;
        cin>>cantidad;
        colon c;
        c.setValor(cantidad);
        tipoCambio tc;
        double dolares = c.conversion(&tc);
        cout << "Equivalente en dolares: " << dolares << endl;
    }
    else if (opcion == 3) {
            cout << "Saliendo..." << endl;
    }
    else{
        cout<<"Opcion no valida"<<endl;
    }
    system("pause");
    return 0;
}