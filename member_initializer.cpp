#include<iostream>
using namespace std;
//member initializer solve another class object creation problem initialize incoming value
//class dob
class BirthDay{
    short day,month,year;
public:
    BirthDay(short d, short m, short y){
    day = d;
    month = m;
    year = y;
    }

     void getDOB(){
        cout << day << "/" << month << "/" << year;
    }
};

class Person{
    string name;
    BirthDay dob;
public:
    Person(string n, BirthDay obj) : name(n), dob(obj){
    }

    void personDetails(){
        cout << endl << "Name : " << name << endl;
        cout << "DOB  : ";
        dob.getDOB();
        cout << endl;
    }
};

int main(){

    BirthDay dob1(1,1,2000);
    Person user1("User 1",dob1);
    user1.personDetails();

    BirthDay dob2(1,1,2000);
    Person user2("User 2",dob2);
    user2.personDetails();

    return 0;
}
