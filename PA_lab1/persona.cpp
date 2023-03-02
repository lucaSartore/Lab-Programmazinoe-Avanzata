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

Person::Person(const Person &p) {
    age = p.age;
    name = p.name;
    if(p.b == nullptr){
        b = nullptr;
    }else{
        b = new int[5];
        for(int i = 0; i < 5; i++){
            b[i] = p.b[i];
        }
    }
}

Person::Person() {
    name = (char*) "N/A";
    age = 0;
    b = nullptr;
}

Person::Person(char *_name, int _age) {

    name = _name;
    age = _age;
    b = new int[5];
    for(int i = 0; i < 5; i++){
        b[i] = i;
    }

}

Person::~Person() {
    if(b == nullptr){
        cout << "notting to delete" << endl;
    }else{
        delete b;
    }
    cout << "DELETING" << endl;
}

char *Person::get_name() const {
    return name;
}

int Person::get_age() const {
    return age;
}

ostream& operator <<(ostream& os, const Person& p){
    return os << "Name: " << p.get_name() << " Age: " << p.get_age();
}
