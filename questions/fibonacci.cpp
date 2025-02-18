#include<iostream>
using namespace std;

void fibonacci(int number){
    int a,b,temp;
    a = 0;
    b = 1;
    for(int i=0; i<number; i++){
        temp = a+b;
        cout << temp << endl;
        a = b;
        b = temp;
    }
}

int main(){
    fibonacci(10);
    return 0;
}
