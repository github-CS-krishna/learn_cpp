#include<iostream>
using namespace std;

string program = "cpp";

void temp(){
    cout << "temp function. program = " << program << endl;
}

int main(){

    string program = "python";
    temp();
    cout << "main function. program = " << program << endl;
    cout << "unary scope resolution program = " << ::program << endl;
    return 0;
}
