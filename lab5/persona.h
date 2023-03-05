//
// Created by lucas on 05/03/2023.
//
#ifndef PA_LAB5_PERSONA_H
#define PA_LAB5_PERSONA_H

#include <iostream>
using namespace std;

class Persona {
protected:
    char* name;
    char* surname;
    int year_of_birth;
    virtual ostream& printing_operator(ostream& os);
public:
    Persona();
    Persona(Persona &persona);
    Persona(char * _name, char * _surname, int _year_of_birth);
    virtual ~Persona()= default;
    int get_age();
    char* get_name();
    char* get_surname();

    friend ostream & operator<<(ostream& os, Persona& p);
};

ostream & operator<<(ostream& os, Persona& p);


#endif //PA_LAB5_PERSONA_H
