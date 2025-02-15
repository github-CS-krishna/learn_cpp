#include<iostream>
using namespace std;

//try out friend function
//friend function use to access private variable;
class Test{
    string name;
public:
    void printName(){
        cout << "name = " << name << endl;
    }
    //function prototype
    friend void changeName(Test& obj, string n);
};

void changeName(Test& obj, string n){
    obj.name = n;
}

int main(){

    Test object1;
    object1.printName();
    changeName(object1,"user 1");
    object1.printName();

    return 0;
}
