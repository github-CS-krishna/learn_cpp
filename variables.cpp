#include<iostream>
using namespace std;

int main(){

    //data types
    int number = 24;
    double pi  = 3.141539;
    char A = 'a';
    string programming = "cpp programming";
    bool cpp = true;

    cout << "Explore all data type" << endl;
    cout << "number      = " << number << endl;
    cout << "pi          = " << pi << endl;
    cout << "character   = " << A << endl;
    cout << "programming = " << programming << endl;
    cout << "cpp         = " << cpp << endl;


    //multiple variable initialize
    cout << endl << "Multiple variable iniialize" << endl;

    int a=1, b=2, c=3;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;

    int x,y,z;
    x = y = z = 1;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;


    //constances
    cout << endl << "Constances" << endl;

    const string MESSAGE = "hello world";
    cout << "message = " << MESSAGE << endl;

    const float PI = 3.141539;
    cout << "const PI = " << PI << endl;

    return 0;
}
