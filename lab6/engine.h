//
// Created by lucas on 06/03/2023.
//

#ifndef PA_LAB6_ENGINE_H
#define PA_LAB6_ENGINE_H

#include <iostream>

class Engine {
protected:
    bool is_turned_on;
    virtual std::ostream& print_operator(std::ostream& os);
    friend std::ostream& operator<<(std::ostream& os, Engine& e);
public:
    Engine();
    virtual ~Engine()=default;
    virtual void refuel()=0;
    virtual void recharge()=0;
    void turn_on();
    void turn_off();
};

std::ostream& operator<<(std::ostream& os, Engine& e);


#endif //PA_LAB6_ENGINE_H
