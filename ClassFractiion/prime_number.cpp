//
// Created by lucas on 07/03/2023.
//

#include "prime_number.h"
#include <iostream>
#include <cmath>
bool is_prime(int number){
    if(number==1){
        return true;
    }
    for(int i=2; i<number;i++){
        if(number%i == 0){
            return false;
        }
    }
    return true;
}

PrimeNumber::PrimeNumber(int _number, int _multiplier ) {
    if(!is_prime(_number)){
        cerr<< "The number: " << _number <<" is not prime!" << endl;
        throw std::invalid_argument("number is not prime!");
    }
    number = _number;
    multiplier = _multiplier;
}

void PrimeNumber::simplify(PrimeNumber &other_prime_number) {
    if(number!=other_prime_number.number){
        throw std::invalid_argument("impossible to simplify two different numbers");
    }
    if(multiplier<other_prime_number.multiplier){
        other_prime_number.multiplier-=multiplier;
        multiplier=0;
    }else{
        multiplier-=other_prime_number.multiplier;
        other_prime_number.multiplier=0;
    }
}

int PrimeNumber::get_number() const {
    return number;
}

int PrimeNumber::get_multiplier() const {
    return multiplier;
}

int PrimeNumber::get_total() const {
    return std::lround(
            lround(
                std::pow(number, multiplier)
                )
                );
}

bool PrimeNumber::is_zero() const {
    return multiplier==0;
}

bool PrimeNumber::operator>(const PrimeNumber &n2)  const{
    return number>n2.number;
}
bool PrimeNumber::operator>=(const PrimeNumber &n2) const{
    return number>n2.number;
}
bool PrimeNumber::operator<(const PrimeNumber &n2) const{
    return number>n2.number;
}
bool PrimeNumber::operator<=(const PrimeNumber &n2) const{
    return number>n2.number;
}

bool PrimeNumber::operator==(const PrimeNumber &n2) const {
    return number==n2.number;
}

void PrimeNumber::operator*=(const PrimeNumber &n2) {
    if(n2.number != number){
        throw invalid_argument("Impossible to multiply prime numbers with different value");
    }
    multiplier += n2.multiplier;
}

ostream& operator<<(ostream& os, const PrimeNumber& pn){
    return os << pn.get_number() << "^" << pn.get_multiplier();
}
