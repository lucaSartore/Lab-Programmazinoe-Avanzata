#include <iostream>
#include <set>
#include "prime_number.h"
#include "cmath"
#include "number.h"


using namespace std;


int main() {

    Number n = Number(3);

    n /= Number(4);
    n *= 2;

    n *= 11;
    n /= 11;

    n *= 27;
    n /= 27;

    n = n * 10;
    n = n / 5;

    n.debug_print();

    n.simplify();
    n.simplify();

    n.debug_print();



    cout << n.get_value() << endl;

}
