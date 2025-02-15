#include<iostream>
using namespace std;

int area(int s){
    return s*s;
}

double area(int height, int base){
    return height * base / 2;
}
int main(){

    cout << "area of square 4 a = " << area(4) << endl;
    cout << "area of triangle height=4 base=5 a = " << area(4,5) << endl;

    return 0;
}
