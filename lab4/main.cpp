#include <iostream>

#include "fuel_type.h"
#include "Engine.h"
#include "Car.h"

using namespace std;

int main(){

    Car car = Car();
    cout << car << endl;

    car.turn_on();
    cout << car << endl;

    car.give_gas();
    cout << car << endl;

    car.give_gas();car.give_gas();car.give_gas();car.give_gas();car.give_gas();car.give_gas();car.give_gas();car.give_gas();car.give_gas();car.give_gas();
    cout << car << endl;

    car.brake();car.brake();car.brake();car.brake();
    cout << car << endl;

    car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();car.brake();
    cout << car << endl;

}
