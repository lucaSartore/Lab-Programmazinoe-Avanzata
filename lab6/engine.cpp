//
// Created by lucas on 06/03/2023.
//

#include "engine.h"

void Engine::turn_on() {
    if(is_turned_on){
        throw "Engine already turned on!";
    }
}

void Engine::turn_off() {
    if(!is_turned_on){
        throw "Engine already turned off!";
    }

}

std::ostream &Engine::print_operator(std::ostream &os) {
    if(is_turned_on){
        return os << "Generic Engine turned ON";
    }else{
        return os << "Generic Engine turned OFF";
    }
}

std::ostream &operator<<(std::ostream &os, Engine &e) {
    return e.print_operator(os);
}

Engine::Engine() {
    is_turned_on = false;
}
