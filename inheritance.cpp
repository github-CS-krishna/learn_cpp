#include<iostream>
using namespace std;

//parent
class Person{
protected:
    string name;
    short  age;
};
//child
class Employee: public Person{
public:
    Employee(string n, short a){
        name = n;
        age = a;
    }
    void printDetails(){
        cout << "Name = " << name << endl;
        cout << "Age  = " << age  << endl;
    }
    void test(){
    cout << "test function" << endl;
    }
};

int main(){
    Employee emp1("employee 1",10);
    emp1.printDetails();

    Employee emp2("employee 2",20);
    emp2.printDetails();

    return 0;
}
