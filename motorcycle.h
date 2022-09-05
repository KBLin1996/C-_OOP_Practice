#ifndef MOTORCYCLE
#define MOTORCYCLE

#include "vehicle.h"
#include "vehicleSize.h"
#include <string>
#include <iostream>
using namespace std;

class motorcycle: public vehicle {
public:
    motorcycle(string number, string color);

    string getColor();
    
    string getNum();
};

#endif