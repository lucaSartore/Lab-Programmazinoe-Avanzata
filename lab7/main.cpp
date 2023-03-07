#include <iostream>
#include <list>
#include <vector>
using namespace std;

// write a function that takes a generic collection and check if is sorted

template <template <typename T> class Iter, typename T>
bool is_sorted(Iter<T> &iter){


    int prev = iter.front();

    for(auto t: iter){
        if(prev>t){
            return false;
        }
        prev=t;
        cout << t << endl;
    }
    return true;


//    T latest = *iter;
//
//    for(auto t: iter){
//        if(latest>*iter){
//            return false;
//        }
//        latest = *iter;
//        cout << t << endl;
//    }


    return true;
}



int main() {


    //list<int> collection = list<int>();

    vector<float> collection = vector<float>();


    collection.push_back(11);
    collection.push_back(12);
    collection.push_back(15);
    collection.push_back(17);


    bool result = is_sorted(collection);

    cout << "is sorted: " << result << endl;


}
