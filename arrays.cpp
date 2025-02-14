#include<iostream>
#include<vector> //vector array
#include<typeinfo> // variable type finder
using namespace std;

int main(){

    int i;
    //array
    cout << "Normal array" << endl;
    short arr[] = {1,2,3,4,5};
    for(i=0; i<5; i++){
        cout << "index "<< i << " value = " << arr[i] << endl;
    }

    //find array size
    //sizeof function return total bytes count
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    cout << "array size = " << arrLength << endl;

    cout << endl << "array 2" << endl;
    int arr1[2];
    for(i=0; i<2; i++){
        arr1[i] = (i+1)*10;
        cout << "arr1[" << i << "] = " << arr1[i] << endl;
    }


    // vector array
    // vector array is resizable
    cout << endl << "Vector array" << endl;
    vector<int> arr2 = {1,2};

    for(i=1; i<=4; i++){
        if(i>2){
            arr2.push_back(i);
        }
        cout << "index " << i-1 << " value = " << arr2[i-1] << endl;
    }

    //print array types
    cout << endl << "print array type" << endl;
    cout << "type of normal array = " << typeid(arr1).name() << endl;
    cout << "type of vector array = " << typeid(arr2).name() << endl;

    return 0;
}
