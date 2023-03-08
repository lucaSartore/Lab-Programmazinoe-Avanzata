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

    n = n * 10;
    n = n / 5;




    cout << n.get_value() << endl;

}
