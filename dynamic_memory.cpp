#include<iostream>
using namespace std;
//new keyword use to allocate dynamic memory or heap storage

void varDetails(string,int*);

class Test{
public:
    Test(){}
    Test(int value):var(value){}
    int var;
};
int main(){

    int var1 = 1000;
    cout << "normal var         = " << var1 << endl;
    cout << "normal var address = " << &var1 << endl;

    int *number1 = new int(1);
    varDetails("number1",number1);
    int *number2 = new int(2);
    varDetails("number2",number2);

    cout << "\n\ndynamic memory in class" << endl;
    Test *t1 = new Test(1000);
    cout << "t1 object address = " << &*t1 << endl;
    Test *t2 = new Test(2000);
    cout << "t2 object address = " << &*t2 << endl;
    delete t1,t2;
    Test *t3 = new Test(3000);
    cout << "t3 object address = " << &*t3 << endl;
    delete t3;

    //object of array
    cout << "\nobject array" << endl;
    Test *objarr = new Test[10];
    objarr[0] = Test(100);
    objarr[1] = Test(200);
    cout << "objarr[0] address = " << &objarr[0] << endl;
    cout << "objarr[1] address = " << &objarr[1] << endl;
    delete[] objarr;

    return 0;
}

void varDetails(string varName,int *pointer){
    cout << endl << varName << " value   : " << *pointer << endl;
    cout << varName << " address : " << &*pointer << endl;
    delete pointer;
}
