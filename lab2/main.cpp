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

int main(){

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