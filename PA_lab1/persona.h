#ifndef PA_LAB1_PERSONA_H
#define PA_LAB1_PERSONA_H
#include <iostream>
using namespace std;
struct Persona{
    char* name;
    char* surname;
    int age;
    int* b;


    Persona(Persona &p);

    Persona(char* _name, char* _surname, int _age = 0);

    ~Persona();



};

#endif
