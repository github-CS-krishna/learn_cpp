#include<iostream>
using namespace std;

int main(){

    int x = 4,y = 3;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    //arithmetic operators
    cout << endl << "Arithmetic operations" << endl;
    cout << "addition      = " << x+y << endl;
    cout << "subraction    = " << x-y << endl;
    cout << "multipication = " << x*y << endl;
    cout << "division      = " << x/y << endl;
    cout << "modulus       = " << x%y << endl;
    cout << "increment     = " << ++x << endl;
    cout << "decriment     = " << --x << endl;


    //assignment operator
    cout << endl << "Assignment operator" << endl;
    x += 1;
    cout << "x += 1 : " << x << endl;
    x -= 1;
    cout << "x -= 1 : " << x << endl;
    x *= 1;
    cout << "x *= 1 : " << x << endl;
    x /= 1;
    cout << "x /= 1 : " << x << endl;
    x %= 1;
    cout << "x %= 1 : " << x << endl;

    //comparison operator
    cout << endl << "Comparison operator" << endl;
    cout << "x == y : " << (x==y) << endl;
    cout << "x != y : " << (x!=y) << endl;
    cout << "x > y  : " << (x>y)  << endl;
    cout << "x < y  : " << (x<y)  << endl;
    cout << "x >= y : " << (x>=y) << endl;
    cout << "x <= y : " << (x<=y) << endl;

    //bitwise operator
    /*
        & - and
        | - or
        ^ - xor
       << - left shift
       >> - right shift
        ~ - not
    */
    cout << endl << "Bitwise operator" << endl;
    x = 1 , y = 2;
    cout << "x = " << x << "  y = " << y << endl;
    cout << "x & y  : " << (x&y) << endl;
    cout << "x | y  : " << (x|y) << endl;
    cout << "x ^ y  : " << (x^y) << endl;
    cout << "x << 1 : " << (x<<1) << endl;
    cout << "x >> 1 : " << (x>>1) << endl;
    cout << "~x     : " << ~x << endl;


    //logical operator
    // && = and || = or equellent syntax
    cout << endl << "Logical operator" << endl;
    cout << "x = " << ++x  << "  y = " << y << endl;
    cout << "x==1 && y==1 : " << (x==1 && y==1) << endl;
    cout << "x==1 or y!=0 : " << (x==1 or y!=0) << endl;
    cout << "!(x>0)       : " << (!(x>0)) << endl;
    cout << "!(x<0)       : " << (!(x<0)) << endl;

    return 0;
}
