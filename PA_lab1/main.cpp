#include <iostream>
#include <cstring>
#include "persona.h"

using namespace std;

int main() {
    Person p = Person((char*)"mario", 100);
    Person p2 = p;
    Person p3 = Person();


    cout << p << endl;
    cout << p2 << endl;
    cout << p3 << endl;
}
