#include<iostream>
using namespace std;

int factorial(int number){
    if(number == 1){
        return 1;
    }
    return number * factorial(number-1);
}

int main(){

    cout << "factorial of 5  = " << factorial(5) << endl;
    cout << "factorial of 4 = " << factorial(4) << endl;
    return 0;
}
