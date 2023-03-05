//
// Created by lucas on 05/03/2023.
//
#include "studente.h"

Studente::Studente(): Persona() {
    marks = nullptr;
}

Studente::Studente(char *_name, char *_surname, int _year_of_birth): Persona(_name, _surname, _year_of_birth){
    marks = new int[NUMBER_OF_MARK];
    for (int i=0; i < NUMBER_OF_MARK; i ++){
        marks[i] = i*10;
    }
}

float Studente::getAvrege() {
    if (marks == nullptr){
        return 0;
    }
    float avrege = 0;
    for (int i = 0; i < NUMBER_OF_MARK; i++){
        avrege += (float )*(marks+i);
    }
    return avrege/NUMBER_OF_MARK;
}

Studente::~Studente(){
    delete[] marks;
}

ostream &Studente::printing_operator(ostream &os) {
    return os << "Studente: Name: " << name << " Surname: " << surname << " Year of birth: " << year_of_birth << " Avrege: " << getAvrege();
}
