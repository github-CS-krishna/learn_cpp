//using fstream
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream file1;
    file1.open("../cpp_file_handling/file_write.txt");

    file1 << "Hello world" << endl;
    file1 << "write a file";

    return 0;
}
