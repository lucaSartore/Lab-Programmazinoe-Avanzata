#include <iostream>

using namespace std;


class FloatingPoint;

class Integer{
private:
    int a;
public:
    explicit Integer():Integer(0){}

    explicit Integer(int _a){
        a = _a;
    }

    friend ostream& operator << (ostream &o, const Integer &i);

    Integer operator + (Integer &i){
        return Integer(a+i.a);
    }

    Integer operator + (FloatingPoint &f);

    friend FloatingPoint;

    friend Integer operator - (Integer &i1, Integer &i2);
    friend Integer operator - (Integer &i1, FloatingPoint &f2);
    friend FloatingPoint operator - (FloatingPoint &f1, Integer &i2);

};

ostream& operator << (ostream &o, const Integer &i){
    return o << "I_Class{" << i.a << "}";
}

class FloatingPoint{
private:
    float a;
public:
    explicit FloatingPoint():FloatingPoint(0){}

    explicit FloatingPoint(float _a){
        a = _a;
    }

    friend ostream &operator << (ostream &o, const FloatingPoint &f);

    friend Integer;

    FloatingPoint operator + (Integer &i){
        return FloatingPoint(a+i.a);
    }
    FloatingPoint operator + (FloatingPoint &i){
        return FloatingPoint(a+i.a);
    }

    friend Integer operator - (Integer &i1, FloatingPoint &f2);
    friend FloatingPoint operator - (FloatingPoint &f1, Integer &i2);
    friend FloatingPoint operator - (FloatingPoint &f1, FloatingPoint &f2);
};

ostream &operator << (ostream &o, const FloatingPoint &f){
    return o << "FP_Class{" << f.a << "}";
}

Integer Integer::operator + (FloatingPoint &f){
    return Integer(a+f.a);
}

Integer operator - (Integer &i1, Integer &i2){
    return Integer(i1.a - i2.a);
}
Integer operator - (Integer &i1, FloatingPoint &f2){
    return Integer(i1.a - f2.a);
}
FloatingPoint operator - (FloatingPoint &f1, Integer &i2){
    return FloatingPoint(f1.a - i2.a);
}
FloatingPoint operator - (FloatingPoint &f1, FloatingPoint &f2){
    return FloatingPoint(f1.a - f2.a);
}




int main(){


    return  0;

    Integer i1(10);
    Integer i2(12);
    FloatingPoint f1(11.5);
    FloatingPoint f2(0.7);

    cout << i1 + i2<< endl;
    cout << i1 + f1<< endl;
    cout << f1 + i1<< endl;
    cout << f1 + f2<< endl;

    cout << i1 - i2<< endl;
    cout << i1 - f1<< endl;
    cout << f1 - i1<< endl;
    cout << f1 - f2<< endl;

}
