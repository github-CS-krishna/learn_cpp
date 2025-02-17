#include<iostream>
#include<fstream>
using namespace std;

int main(){

    try{
        ifstream file1("../cpp_file_handling/file_write.txt");

        if(file1.is_open()){
                cout << "start to read file" << endl;
                string temp;
                while(getline(file1,temp)){
                    cout << temp << endl;
                }
                file1.close();
        }
        else{
            throw -1;
        }
    }
    catch(int x){
        cout << "File reading Error are occured " << x << endl;
    }
    return 0;
}
