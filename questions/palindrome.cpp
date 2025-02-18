#include<iostream>
using namespace std;

string isPalindrome(string str){
    int stringLength = str.length();
    for(int i=0; i<stringLength/2; i++){
        if(str[0] != str[stringLength-1]){
            return "no";
        }
    }
    return "yes";
}

int main(){

    cout << "'hello' is palindrome = " << isPalindrome("hello") << endl;
    cout << "'madam' is palindrome = " << isPalindrome("madam") << endl;
    return 0;
}
