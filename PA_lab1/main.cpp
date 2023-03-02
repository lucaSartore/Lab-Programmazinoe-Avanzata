#include <iostream>
#include <cstring>
#include "persona.h"

using namespace std;

int main() {

    Persona p = Persona((char*)"mario", (char*)"rossi", 100);
    Persona p2 = p;

    cout << "1" << endl;

    p2.name[0] = '!';

    cout << "2" << endl;

    cout << p.name << endl;

}
