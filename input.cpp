#include<iostream>
using namespace std;

int main(){

    int x,y;
    // >> - stream extraction
    // << - stream insertion

    cout << "enter number 1 : ";
    cin >> x;
    cout << "enter number 2 : ";
    cin >> y;
    cout << "number1 + number2 = " << x+y << endl;


    //input string
    string name;
    cout << "enter name : " << endl;
    getline(cin, name);
    cout << "Hi " << name << endl;

    return 0;
}
