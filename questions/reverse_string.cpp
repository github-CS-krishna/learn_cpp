#include<iostream>
using namespace std;

string reverseString(string str){
    char temp;
    int strLength = str.length();
    for(int i=1; i<=strLength/2; i++){
        temp = str[strLength-i];
        str[strLength-i] = str[i-1];
        str[i-1] = temp;
    }
    return str;
}

int main(){

    string var1 = "hello";
    cout << "string         = " << var1 << endl;
    cout << "reverse string = " << reverseString(var1) << endl;
    return 0;
}
