#pragma once
#include <iostream>
#include <sstream>
#include "Motor.h"
using namespace std;

class mElectrico : public Motor{
private:
    float amperage;
public:
    mElectrico();
    mElectrico(float, string, string, double);
    void setAmperage(float);
    float getAmperage();
    string toString();
};