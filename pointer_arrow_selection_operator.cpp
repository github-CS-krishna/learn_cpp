#include<iostream>
using namespace std;

class Test{
public:
    string className = "Test class";
    void message(){
        cout << "Test class message function" << endl;
    }
};

int main(){

    //create object in Test class
    Test object1;
    Test* pointer1 = &object1;

    object1.message();
    pointer1->message();
    cout << "class name = " << pointer1->className << endl;

    return 0;
}
