#include<iostream>
using namespace std;

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
//string specialized template
template<>
class Test<string>{
    string data;
public:
    Test(string data){
        this->data = data;
    }
    int getLength(){
        return data.length();
    }
};

int main(){

    Test<char> object1('~');
    object1.printData();

    Test<string> object2("dummy data");
    cout << "object2 data length = " << object2.getLength() << endl;

    return 0;
}

/*
    OUTPUT
    ------------------------
    data = ~
    object2 data length = 10
*/
