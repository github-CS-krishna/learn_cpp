
#include<iostream>
using namespace std;

struct student{
    string name = "";
    short studentID = 0;
    short age = 0;
};
int main(){
    student s1;
    s1.name = "student 1";
    s1.studentID = 1400;
    s1.age = 20;

    cout << "Structure" << endl;
    cout << "name       = " << s1.name << endl;
    cout << "student id = " << s1.studentID << endl;
    cout << "age        = " << s1.age << endl;

    return 0;
}
