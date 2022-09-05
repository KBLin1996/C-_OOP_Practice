#include "vehicle.h"
#include "vehicleSize.h"
#include <string>
#include <iostream>
using namespace std;

vehicle::vehicle(vehicleSize size) {
    this -> size = size;
}

vehicleSize vehicle::getSize() {
    return vehicle::size;
}