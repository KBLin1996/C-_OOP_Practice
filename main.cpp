#include "motorcycle.h"
#include "vehicle.h"
#include "vehicleSize.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    motorcycle m("AE86", "Red");

    cout << m.getColor() << endl;
    cout << m.getNum() << endl;
    printf("%d\n", m.getSize());
}