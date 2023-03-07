//
// Created by lucas on 07/03/2023.
//

#include "number.h"

Number::Number(int number) {

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
