#include<iostream>
using namespace std;

int main(){

    int i = 0;

    //while loop
    cout << "While loop" << endl;
    while(i<9){
        cout << "hello world!  " << "i = " << i << endl;
        i++;
    }

    //do while loop
    cout << endl << "Do while loop" << endl;
    i = 0;
    do{
        cout << "goodBye world~  " << "i = " << i << endl;
        i++;
    }while(i<9);

    //for loop
    cout << endl << "For loop" << endl;
    for(i=0; i<9; i++){
        cout << "create world :)  " << "i = " << i << endl;
    }

    //for each loop

    char message[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    cout << endl << "For each loop" << endl;
    for(char i : message){
        cout << i << endl;
    }

    //break and continue key word
    cout << endl << "Break and continue key word" << endl;
    cout << endl << "loop statement i=0; i<5; i++" << endl;
    for(i=0; i<5; i++){
        if(i==0){
            cout << "i use continue key word. i = " << i << endl;
            continue;
        }
        else if(i==3){
            cout << "i use break and break it loop. i = "<< i << endl;
            break;
        }
        cout << "i = " << i << endl;
    }
    return 0;
}
