#include "motorcycle.h"
#include <string>
#include <iostream>
using namespace std;

motorcycle::motorcycle(string number, string color): vehicle(vehicleSize::Small) {
    vehicle::plateNum = number;
    vehicle::color = color;
}

string motorcycle::getColor() {
    return vehicle::color;
}

string motorcycle::getNum() {
    return vehicle::plateNum;
}