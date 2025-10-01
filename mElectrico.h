#include <iostream>
#include <sstream>
using namespace std;

class mElectrico{
private:
    float amperage;
public:
    mElectrico();
    mElectrico(float);
    void setAmperage(float);
    float getAmperage();
    string toString();
};