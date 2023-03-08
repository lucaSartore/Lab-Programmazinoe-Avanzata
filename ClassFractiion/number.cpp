//
// Created by lucas on 07/03/2023.
//

#include "number.h"

#include <iostream>
#include <list>

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
            insert_to_numerator(PrimeNumber(divisor,1));
        }else{
            divisor++;
        }
    }

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
    }
    for(auto pn: denominator){
        n/=(float) pn.get_total();
    }
    return n;
}

void Number::simplify() {


    typedef std::set<PrimeNumber>::const_iterator IterType;

    list to_edit = list<pair<IterType, IterType>>();


    auto numerator_iter = numerator.begin();
    auto denominator_iter = denominator.begin();

    while (numerator_iter != numerator.end() and denominator_iter != denominator.end()){

        int numerator_term = numerator_iter->get_number();
        int denominator_term = denominator_iter->get_number();

        // they are simplifiable, so i save them for later
        if(numerator_iter->get_number() == denominator_iter->get_number()){
            to_edit.emplace_front(pair(numerator_iter,denominator_iter));
            numerator_iter++;
            denominator_iter++;
        }else if(numerator_term > denominator_term){
            denominator_iter++;
        }else{
            numerator_iter++;
        }

    }


    cout << "half way simplification" << endl;

    // simplify elements
    for(auto e: to_edit){

        //save the 2 values
        PrimeNumber numerator_term = *e.first;
        PrimeNumber denominator_term = *e.second;

        // remove the values
        numerator.erase(e.first);
        denominator.erase(e.second);

        // simplify the 2 values
        numerator_term.simplify(denominator_term);

        // add them back only if they are not zero
        if(numerator_term.get_multiplier() != 0){
            insert_to_numerator(numerator_term);
        }
        if(denominator_term.get_multiplier() != 0){
            insert_to_denominator(denominator_term);
        }

    }
}

Number Number::operator*(const Number &other) const {
    Number number = *this;
    number *= other;
    return number;
}

Number Number::operator/(const Number &other) const {
    Number number = *this;
    number /= other;
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

void Number::debug_print() const {
    cout << "1";
    for(auto e: numerator){
        cout << " * " << e;
    }
    cout << endl << "--------------------------------------------------------------" << endl;
    cout << "1";
    for(auto e: denominator){
        cout << " * " << e;
    }
    cout << endl;
}
