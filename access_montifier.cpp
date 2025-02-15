#include<iostream>
using namespace std;

class Shop{

private:
    int money = 0;

public:
    //constructor
    Shop(int M){
        money = M;
    }
    //addmoney  function
    void addMoney(string product){
        if(product == "milk"){
            money += 37;
        }else if(product ==  "biscket"){
            money += 10;
        }
    }
    //get money
    int getMoney(){
        return money;
    }
};

int main(){

    Shop s1(0);
    cout << "money = " << s1.getMoney() << endl;
    s1.addMoney("milk");
    s1.addMoney("biscket");
    s1.addMoney("biscket");
    cout << "money = " << s1.getMoney() << endl;
    return 0;
}
