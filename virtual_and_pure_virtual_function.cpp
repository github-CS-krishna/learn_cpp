#include<iostream>
using namespace std;

class Batsman{
protected:
    int run;
public:
    void setScore(int r){
        run = r;
    }
    virtual void runs(){
        cout << "bater score print" << endl;
    }
    virtual void specialShort() = 0;
};

class Dhoni : public Batsman{
public:
    void runs(){
        cout << "Dhoni score = " << run << endl;
    }
    void specialShort(){
        cout << "Helicopter short" << endl;
    }
};

class Koli : public Batsman{
public:
    void runs(){
        cout << "Koli score = " << run << endl;
    }
    void specialShort(){
        cout << "Cover drive" << endl;
    }
};

int main(){

    Dhoni dhoni;
    Batsman* bater1 = &dhoni;

    bater1->setScore(100);
    bater1->runs();
    bater1->specialShort();


    Koli koli;
    Batsman* bater2 = &koli;

    bater2->setScore(120);
    bater2->runs();
    bater2->specialShort();

    return 0;
}

/*
    OUTPUT
    Dhoni score = 100
    Helicopter short
    Koli score = 120
    Cover drive
*/
