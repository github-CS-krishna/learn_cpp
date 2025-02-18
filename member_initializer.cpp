#include<iostream>
using namespace std;
//member initializer solve another class object creation problem initialize using incoming value
//class dob
class BirthDay{
    short day,month,year;
public:
    BirthDay(short d, short m, short y){
    day = d;
    month = m;
    year = y;
    }

     string getDOB(){
         return to_string(day)+"/"+to_string(month)+"/"+to_string(year);
    }
};

class Person{
    string name;
    BirthDay dob;
public:
    Person(string n, short day, short month, short year): name(n),dob(day,month,year){
    }

    void personDetails(){
        cout << endl << "Name : " << name << endl;
        cout << "DOB  : " << dob.getDOB() << endl;
    }
};

int main(){

    Person user1("user 1",1,1,2000);
    Person user2("user 2",2,2,2000);

    user1.personDetails();
    user2.personDetails();
    return 0;
}
