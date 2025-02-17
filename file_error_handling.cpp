#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream file1("../cpp_file_handling/file_write.txt");

    try{
        if(file1.is_open()){
            file1 << "cpp use to write this file" << endl;
            file1 << "example file writing" << endl;
            file1 << "write user input" << endl;

            cout << "enter to write file" << endl;
            string temp;
            while(true){
                getline(cin,temp);
                if(temp == "") break;
                file1 << temp << endl;
            }
            file1.close();
        }
        else{
            throw -1;
        }
    }catch(int x){
        cout << "Error occured in file writing" << endl;
    }
    return 0;
}
