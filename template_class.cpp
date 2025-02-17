#include<iostream>
using namespace std;

//template class
template <class T>
class Test{
    T data;
public:
    Test(T data){
    this->data = data;
    }

    void printData(){
    cout << endl << "data = " << data << endl;
    }
};


int main(){

    Test<int> object1(10);
    object1.printData();

    Test<string> object2("secret message");
    object2.printData();

    Test<double> object3(3.141539);
    object3.printData();

    return 0;
}
