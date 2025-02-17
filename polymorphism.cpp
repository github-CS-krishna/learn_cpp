#include<iostream>
using namespace std;
//super class
class Batsman{
protected:
    int run;
public:
    void setRun(int run){
        this->run = run;
    }
};
//subclass
class Dhoni: public Batsman{
public:
    void printRun(){
    cout << "\nDhoni score = " << run << endl;
    }
};
class Koli: public Batsman{
public:
    void printRun(){
    cout << "Koli score = " << run << endl;
    }
};

int main(){

    Dhoni dhoni;
    Koli koli;

    Batsman* batsman1 = &dhoni;
    Batsman* batsman2 = &koli;

    batsman1->setRun(10);
    batsman2->setRun(20);

    dhoni.printRun();
    koli.printRun();

    return 0;
}

/*
    OUTPUT
    Dhoni score = 10
    Koli score = 20
*/
