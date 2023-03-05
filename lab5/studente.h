//
// Created by lucas on 05/03/2023.
//

#ifndef PA_LAB5_STUDENTE_H
#define PA_LAB5_STUDENTE_H

#include "persona.h"

#define NUMBER_OF_MARK 5

class Studente: public Persona {
private:
    int* marks;
    virtual ostream& printing_operator(ostream& os);
public:
    Studente();
    Studente(char * _name, char * _surname, int _year_of_birth);
    float getAvrege();
    ~Studente() override;
};


#endif //PA_LAB5_STUDENTE_H
