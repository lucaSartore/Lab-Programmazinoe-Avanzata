#include <iostream>
using namespace std;

template<typename T>
class unique_pointer{
private:
    T* pointer;
public:
    // default constructor
    unique_pointer(T *_pointer){
        pointer = _pointer;
    }
    // not allowing copying!
    unique_pointer(unique_pointer &_) = delete;
    // move operator
    unique_pointer<T> (unique_pointer<T> && p){
        pointer = p.pointer;
        p.pointer = nullptr;
    }
    ~unique_pointer(){
        delete pointer;
    }

    // not allowing taking reference!
    unique_pointer & operator&() = delete;

    // disallow copy!
    unique_pointer operator=(unique_pointer & _ ) = delete;
//    // move operator
//    unique_pointer operator= {
//        unique_pointer(p);
//    }

    T& operator*(){
        if(pointer == nullptr){
            cerr << "Use of moved value!" << endl;
            exit(1);
        }
        return *pointer;
    }

};


int main() {


    unique_pointer<int> up = unique_pointer(new int(3));

    cout << *up << endl;

    unique_pointer up2 = std::move(up);

    cout << *up2 << endl;
    cout << *up << endl;



}
