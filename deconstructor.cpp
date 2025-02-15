#include<iostream>
using namespace std;

class Test{
public:
    Test(){
        cout << "Constructor" << endl;
    }
    ~Test(){
        cout << "Deconstructor" << endl;
    }
};
int main(){

    Test object1;
    cout << "Main function" << endl;

    return 0;
}
