#include <iostream>
#include "persona.h"
#include "studente.h"
using namespace std;


int main() {

    Persona p = Persona((char*)"CIANO", (char*)"CONTIN", 1969);

    Persona* studente = new Studente((char*)"CIANO", (char*)"CONTIN", 1969);

    cout << *studente;
}
