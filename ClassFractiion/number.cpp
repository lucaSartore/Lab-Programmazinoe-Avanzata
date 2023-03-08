//
// Created by lucas on 07/03/2023.
//

#include "number.h"

Number::Number(int number) {
    numerator = set<PrimeNumber>();
    denominator = set<PrimeNumber>();

    if(number == 0){
        insert_to_numerator(PrimeNumber(0,1));
        return;
    }

    int divisor = 2;
    while (number != 1){
        if(number%divisor == 0){
            number /= divisor;
            cout << "insert: " << divisor << endl;
            insert_to_numerator(PrimeNumber(divisor,1));
        }else{
            divisor++;
        }
    }
    cout << "compleated constructor!" << endl;

}

void Number::insert_to_numerator(PrimeNumber number_to_insert) {
    pair result = numerator.insert(number_to_insert);
    // if the element was already there, and it has not been insered
    if(!result.second){
        // create the new number, witch is the numm of the two
        number_to_insert *= *result.first;
        // remove the previous element
        numerator.erase(result.first);
        // inserting the new one
        numerator.insert(number_to_insert);
    }
}

void Number::insert_to_denominator(PrimeNumber number_to_insert) {
    pair result = denominator.insert(number_to_insert);
    // if the element was already there, and it has not been insered
    if(!result.second){
        // create the new number, witch is the numm of the two
        number_to_insert *= *result.first;
        // remove the previous element
        denominator.erase(result.first);
        // inserting the new one
        denominator.insert(number_to_insert);
    }
}


float Number::get_value(){
    float n = 1;
    for(auto pn: numerator){
        n*=(float) pn.get_total();
        cout << "multiply by: " << pn.get_total() << endl;
    }
    for(auto pn: denominator){
        n/=(float) pn.get_total();
        cout << "dividing by: " << pn.get_total() << endl;
    }
    return n;
}

void Number::simplify() {
}

Number Number::operator*(const Number &other) const {
    Number number = *this;
    for(auto e: other.numerator){
        number.insert_to_numerator(e);
    }
    for(auto e: other.denominator){
        number.insert_to_denominator(e);
    }
    return number;
}

Number Number::operator/(const Number &other) const {
    Number number = *this;
    for(auto e: other.denominator){
        number.insert_to_numerator(e);
    }
    for(auto e: other.numerator){
        number.insert_to_denominator(e);
    }
    return number;
}

void Number::operator*=(const Number &other) {
    for(auto e: other.numerator){
        insert_to_numerator(e);
    }
    for(auto e: other.denominator){
        insert_to_denominator(e);
    }
}

void Number::operator/=(const Number &other) {
    for(auto e: other.denominator){
        insert_to_numerator(e);
    }
    for(auto e: other.numerator){
        insert_to_denominator(e);
    }

}