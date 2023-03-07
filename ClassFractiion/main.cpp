#include <iostream>
#include <set>
#include "prime_number.h"
#include "number.h"


using namespace std;


int main() {


    set<PrimeNumber> numerator = set<PrimeNumber>();

    numerator.insert(PrimeNumber(1));
    numerator.insert(PrimeNumber(3));
    numerator.insert(PrimeNumber(7));



    auto a = numerator.find(PrimeNumber(11));
    cout << *a << endl;


//    set s = set<int>();
//
//
//    s.insert(11);
//    s.insert(21);
//    s.insert(0);
//    s.insert(3);
//
//    for(auto i: s){
//        cout << i << endl;
//    }
}
