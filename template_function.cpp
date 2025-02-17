#include<iostream>
using namespace std;

//template function
template <class T1, class T2>
T1 add(T1 a, T2 b){
    return a+b;
}

int main(){

    int a = 10;
    float b = 2.45;

    cout << "2.45 + 10  addition = " << add(b,a) << endl;
    cout << "12 + 2     addition = " << add(12,2) << endl;
    cout << "3.1111 + 1 addition = " << add(3.1111,1) << endl;

    return 0;
}
