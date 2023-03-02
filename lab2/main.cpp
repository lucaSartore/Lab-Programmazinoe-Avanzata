#include <iostream>
#include<ctime>
#include <chrono>

using namespace std;

void test_inline();


class Foo{
private:
    static int num_instances;
public:
    Foo(){
        num_instances++;
    }
    ~Foo(){
        num_instances--;
    }
    static int get_instances(){
        return num_instances;
    }
};
int Foo::num_instances = 0;



class Wallet{

private:

    int eur;
    int cents;

public:

    Wallet(int _eur, int _cents){
        eur = _eur;
        cents = _cents;
    }

    void print() const{
        cout << "€" << eur <<"." << cents <<endl;
    }

    friend Wallet& operator+=(Wallet &a, Wallet &b);
};

Wallet& operator+=(Wallet &a, Wallet &b){

    a.cents+=b.cents;
    a.eur+=b.eur;

    a.eur+=a.cents/100;
    a.cents%=100;

    b.cents = 0;
    b.eur = 0;

    return a;
}




int main(){

    Wallet p1 = Wallet(100,50);
    Wallet p2 = Wallet(11, 75);

    p1.print();
    p2.print();
    cout << endl;
    p1 += p2;
    p1.print();
    p2.print();
    cout << endl;
    p2 += p1;
    p1.print();
    p2.print();
    cout << endl;



    return 0;
    cout << Foo::get_instances() << endl;

    Foo f1 = Foo();

    cout << Foo::get_instances() << endl;

    Foo f2 = Foo();

    cout << Foo::get_instances() << endl;

    {
        Foo f3 = Foo();
        cout << Foo::get_instances() << endl;
    }
    cout << Foo::get_instances() << endl;
}











void test_inline(){

    class Foo{
        private:
        int a;

        public:

        Foo(){
            a = 0;
        }

        int get_a(){
            return a;
        };
        void set_a(int _a){
            a = _a;
        }
        inline int get_a_inline(){
            return a;
        };
        inline void set_a_inline(int _a){
            a = _a;
        }
    };


    Foo foo = Foo();


    auto start = chrono::high_resolution_clock::now();
    for(int i=0; i<100000000; i++){
        foo.set_a(i);
    }
    auto elapsed = std::chrono::high_resolution_clock::now() - start;
    long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

    cout << microseconds << endl;

    start = chrono::high_resolution_clock::now();

    for(int i=0; i<100000000; i++){
        foo.set_a_inline(i);
    }
    elapsed = std::chrono::high_resolution_clock::now() - start;

    microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

    cout << microseconds << endl;

}