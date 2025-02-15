#include<iostream>
using namespace std;

class Number{

public:
    int num;
    //constructor
    Number(int num){
        this->num = num;
    }
    //operator +
    Number operator+(Number obj2){
        return (num + obj2.num);
    }
    //operator *
    Number operator*(Number obj2){
        return (num * obj2.num);
    }
};

int main(){
    Number a(1);
    Number b(2);
    Number c = a+b;
    cout << " operator+ c = " << c.num << endl;

    Number d = a*b;
    cout << " operator* d = " << d.num << endl;

    return 0;
}
