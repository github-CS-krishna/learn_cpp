#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    cout << "Generate random numbers between 1 to 100" << endl;
    srand(time(0));
    for(short i=1; i<=10; i++){
        cout << (rand()%100)+1 << endl;
    }

    return 0;
}
