#include<iostream>
using namespace std;

class Test{
public:
    string className = "Test";
    void helloMessage(){
        cout << "Hi I am Test class Object " << endl;
    }
};
int main(){

    Test obj1;
    obj1.helloMessage();
    cout << "class name = " << obj1.className << endl << endl;

    Test obj2;
    obj1.helloMessage();

    return 0;
}
