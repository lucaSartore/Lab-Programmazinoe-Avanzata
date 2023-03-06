#include <iostream>
#include "engine.h"
#include "gas_engine.h"
#include "elettric_engine.h"

using namespace std;



int main(){

    Engine* engine = new ElettricEngine();

    try{
        engine->refuel();
    }
    catch(const char * e){
        cout << "Error: " << e << endl;
    }

    cout<< *engine << endl;

    try{
        engine->recharge();
    }
    catch(const char * e){
        cout << "Error: " << e << endl;
    }




}


//class A{
//public:
//    int a;
//    A(){
//        a =64574;
//    }
//    A(int _a){
//        a = _a;
//    }
//};
//class B: virtual public A{
//public:
//    int b;
//    B(int _b): A(0){
//        b = _b;
//    }
//};
//class C: virtual public A{
//public:
//    int c;
//    C(int _c): A(10){
//        c = _c;
//    }
//};
//class D: public B, public C{
//public:
//    int d;
//    D(int _d): B(0), C(0){
//        d = _d;
//    }
//};
//
//int main() {
//    D d = D(100);
//    cout << d.a;
//}
