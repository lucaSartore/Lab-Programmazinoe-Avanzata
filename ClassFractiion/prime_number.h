//
// Created by lucas on 07/03/2023.
//

#ifndef CLASSFRACTIION_PRIME_NUMBER_H
#define CLASSFRACTIION_PRIME_NUMBER_H

#include <iostream>

using namespace std;

class PrimeNumber {
private:
    int number;
    int multiplier;
public:
    explicit PrimeNumber(int _number, int _multiplier = 0);
    void simplify(PrimeNumber & other_prime_number);

    int get_number() const;
    int get_multiplier() const;
    int get_total() const;
    bool is_zero() const;

    bool operator>(const PrimeNumber& n2) const;
    bool operator>=(const PrimeNumber& n2) const;
    bool operator<(const PrimeNumber& n2) const;
    bool operator<=(const PrimeNumber& n2) const;
    bool operator==(const PrimeNumber& n2) const;

    void operator*=(const PrimeNumber& n2);

};

ostream& operator<<(ostream& os, const PrimeNumber& pn);

bool is_prime(int number);


#endif //CLASSFRACTIION_PRIME_NUMBER_H
