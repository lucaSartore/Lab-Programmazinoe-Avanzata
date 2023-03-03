#include <iostream>

#include "fuel_type.h"
#include "Engine.h"

using namespace std;

int main(){
    cout << "LAB 4" << endl;

    Engine engine(FuelTypeEnum::DISEL,1,666);

    cout << engine.get_fuel_type();



}
