#ifndef VEHICLE
#define VEHICLE

#include "vehicleSize.h"
#include <string>
#include <iostream>
using namespace std;

class vehicle {
private:
    vehicleSize size;

protected:
    string plateNum;
    string color;

public:
    vehicle(vehicleSize size);
    vehicleSize getSize();
};

#endif