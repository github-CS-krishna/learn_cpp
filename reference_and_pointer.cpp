#include<iostream>
using namespace std;

void passByValue(int num){
    num = 100;
}

void passByReference(int *num){
    *num = 100;
}

int changeValue(int *num, int value){
    *num = value;
    return *num;
}

int main(){

    //pointer variable store variable address
    //&variable name - variable reference or address
    //print reference
    int number = 10;
    double var1 = 0.0;
    cout << "double var1 referece = " << &var1 << endl;

    //use pointer variable
    double *pointer1 = &var1;
    cout << "pointer1 value = " << pointer1 << endl;

    //sizeof pointer
    cout << "sizeof pointer variable = " << sizeof(pointer1) << endl;

    //pass by value
    passByValue(number);
    cout << "pass by value number    = " << number << endl;
    passByReference(&number);
    cout << "pass by reference number = " << number << endl;

    //test change value function
    cout << "change value number var 1500 = " << changeValue(&number,1500) << endl;

    //pointer arithmetic
    cout << "Pointer arithmetics" << endl;
    short arr[2] = {1,2};
    short *p0 = &arr[0];
    short *p1 = &arr[1];
    cout << "p0 = " << p0 << " value = " << *p0 << endl;
    p0 = p0 + 1;
    cout << "p0 = " << p0 << " value = " << *p0 << endl;



    return 0;
}
