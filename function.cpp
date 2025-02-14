#include<iostream>
using namespace std;

//function1
void helloMessage(){
    cout << "Hello all" << endl;
}

//function declaration
int add(int &a, int &b);

void welcomeMessage(string name="Guest");

void arrays(int arr[5]);

void editArray(int arr[5]);

int sum(short number);

int main(){

    int a = 1, b = 1;

    helloMessage();
    cout << "function add = " << add(a,b) << endl;
    welcomeMessage("cpp user");
    welcomeMessage();

    int arr1[5] = {1,2,3,4,5};
    arrays(arr1);
    cout << "array address = " << arr1 << " print in main" << endl;
    editArray(arr1);
    arrays(arr1);

    cout << "sum of 4 = " << sum(4) << endl;

    return 0;
}

//function definition
int add(int &a, int &b){
    return a+b;
}
//default paramter value
void welcomeMessage(string name){
    cout << "Welcome " + name + "!"<< endl;
}
//print arrays element
void arrays(int arr[5]){
    cout << endl << "print array elements" << endl;
    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }
}
//edit array elements
void editArray(int arr[5]){
    cout << endl << "Edit array function " << endl;
    cout << "array address = " << arr << endl;
    for(short i=0; i<5; i++){
        arr[i] += arr[i];
    }
}
//recursion function
int sum(short number){
    if(number == 0){
        return 0;
    }
    else{
        return number + sum(number-1);
    }
}
