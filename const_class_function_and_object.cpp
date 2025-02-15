#include<iostream>
using namespace std;

class Test{
public:
    int number = 1;

    void printVar() const{
        cout << "number = " << number << endl;
    }

    void editVar(){
        number = 1000;
    }
};

int main(){

    Test object1;
    object1.printVar();
    object1.editVar();
    object1.printVar();

    cout << endl << "Const object" << endl;
    const Test object2;
    //object2.editVar(); //Error: this argument discards qualifiers
    object2.printVar();
    return 0;
}
