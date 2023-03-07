//
// Created by lucas on 07/03/2023.
//

#ifndef CLASSFRACTIION_NUMBER_H
#define CLASSFRACTIION_NUMBER_H

#include <iostream>
#include <set>
#include "prime_number.h"

using namespace std;


class Number {
private:
    set<PrimeNumber> numerator;
    set<PrimeNumber> denominator;

    void insert_to_numerator();
    void insert_to_denominator();
public:
    Number(int number);
};


#endif //CLASSFRACTIION_NUMBER_H
