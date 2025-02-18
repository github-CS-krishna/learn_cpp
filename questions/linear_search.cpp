#include<iostream>
using namespace std;

template <class T>
int linearSearch(T arr[], int arrSize, T element){
    for(int i=0; i<arrSize; i++){
        if(element == arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr1[6] = {1,2,3,4,5,6};
    int result = linearSearch(arr1,6,4);
    if(result != -1){
        cout << "element index = " << result << endl;
    }
    else{
        cout << "element not found" << endl;
    }

    float arr2[4] = {2.11f, 43.1f, 55.23f, 3.14f};
    result = linearSearch(arr2,4,100.0f);
    if(result != -1){
        cout << "element index = " << result << endl;
    }else{
        cout << "element not found" << endl;
    }
    return 0;
}
