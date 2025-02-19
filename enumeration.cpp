#include<iostream>
using namespace std;

enum studentGrade{
    LOW = 30,
    MEDIUM = 60,
    HIGH = 100
};

struct student{
    string name = "";
    enum studentGrade grade;
};

inline void studentData(student &studentRef){
    cout << "\nname  = " << studentRef.name << endl;
    switch(studentRef.grade){
    case 30:
        cout << "grade = good" << endl;
        break;
    case 60:
        cout << "grade = growvy" << endl;
        break;
    case 100:
        cout << "grade = nice" << endl;
    }
}
int main(){
    cout << "Enumeration enum " << endl;
    studentGrade subject1 = MEDIUM;
    studentGrade subject2 = LOW;
    studentGrade subject3 = HIGH;
    cout << "subject 1 = " << subject1 << endl;
    cout << "subject 2 = " << subject2 << endl;
    cout << "subject 3 = " << subject3 << endl;

    student s1;
    s1.name = "student 1";
    s1.grade = HIGH;

    student s2;
    s2.name = "student 2";
    s2.grade = MEDIUM;

    studentData(s1);
    studentData(s2);

    return 0;
}
