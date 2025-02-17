#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    cout << "start" << endl;

    int number = 100;
    try{
        if(number > 1){
            throw -1;
        }
    }
    catch(...){
        cout << "Error catched" << endl;
    }
    cout << "end" << endl;
    return 0;
}

/*
    OUTPUT
    ----------------------------------
    start
    Error catched
    end
*/
