#include <iostream>
using namespace std;

#include <algorithm>
#include <vector>

template<typename T, template<typename > typename Iter>
void print_iter(Iter<T> &iter){
    for(auto elem: iter){
        cout << elem << endl;
    }
}

int main() {

    vector<int> v1 = vector<int>();

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);


    // remove odd
    //v1.erase(remove_if( v1.begin(), v1.end(), [](int n) { return n%2; } ), v1    .end() );

    //summ one
    //std::transform(v1.begin(), v1.end(),v1.begin(),[](int n){return n+1;});

    // inverse sort
    //std::sort(v1.begin(), v1.end(),[](int n1, int n2){return n1>n2;});

    // count smaller than n
    //int threshold = 4;
    //int n = std::count_if(v1.begin(), v1.end(),[threshold](int n){return n<=threshold;});
    //cout <<"count: " << n << endl;


    int total = 1;
    int current = 1;

    auto factorial = [&total, &current] (){ total *= ++current;};

    for(int i=0; i < 10; i++){
        factorial();
        cout << total << endl;
    }

    //print_iter(v1);

}
