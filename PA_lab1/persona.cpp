#include <iostream>
#include "persona.h"
#include <cstring>
using namespace std;

Persona::Persona(char *_name, char *_surname, int _age) {
    name = _name;
    surname = _surname;
    age = _age;
    b = new int[5];
    b[0] = 0; b[1] = 1; b[2] = 2; b[3] = 3;
}

Persona::~Persona() {
    if (b != nullptr){
        delete b;
        cout << "b was not null" << endl;
    }
    cout << "De-allocation of Persona" << endl;
}

Persona::Persona(Persona &p) {
    name = p.name;
    surname = p.surname;
    age = p.age;
    if (p.b == nullptr){
        b = nullptr;
    }else{
        b = new int[5];
        for(int i = 0; i< 5; i++){
            b[i] = p.b[i];
        }
    }
}
