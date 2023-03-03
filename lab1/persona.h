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

class Person{
    private:

    int age;
    char* name;
    int* b;

    public:

    char* get_name() const;

    int get_age() const;

    Person(const Person &p);

    Person();

    Person(char* _name, int _age);

    ~Person();


};

ostream& operator <<(ostream& os, const Person& p);

#endif
