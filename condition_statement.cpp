#include<iostream>
using namespace std;

int main(){
    short age = 17;

    if(age >= 18){
        cout << "age greater then or equal 18" << endl;
    }
    else if(age == 17){
        cout << "only one year wait" << endl;
    }
    else{
        cout << "age less then 18" << endl;
    }


    //switch case
    int day = 4;
    switch(day){
    case 1: case 2: case 3: case 4: case 5:
        cout << "workday" << endl;
        break;
    case 6: case 7:
        cout << "holiday" << endl;
        break;
    default:
        cout << "on case matched" << endl;
    }

    return 0;
}
