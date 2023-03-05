//
// Created by lucas on 05/03/2023.
//

#include "persona.h"

ostream &Persona::printing_operator(ostream &os) {
    return os << "Persona: Name: " << name << " Surname: " << surname << " Year of birth: " << year_of_birth;
}

Persona::Persona() {
    name = (char*) "N/A";
    surname = (char*) "N/A";
    year_of_birth = 0;
}

Persona::Persona(Persona &persona) {
    name = persona.name;
    surname = persona.surname;
    year_of_birth = persona.year_of_birth;
}

int Persona::get_age() {
    return year_of_birth;
}

char* Persona::get_name() {
    return name;
}

char *Persona::get_surname() {
    return surname;
}

ostream &operator<<(ostream &os, Persona &p) {
    return p.printing_operator(os);
}

Persona::Persona(char *_name, char *_surname, int _year_of_birth) {
    name = _name;
    surname = _surname;
    year_of_birth = _year_of_birth;
}
