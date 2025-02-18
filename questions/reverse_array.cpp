#include<iostream>
using namespace std;

template <class T>
void reverseArray(T arr[],int arraySize){
    int temp;
    for(int i=0; i<=(arraySize/2); i++){
        temp = arr[arraySize-i-1];
        arr[arraySize-i-1] = arr[i];
        arr[i] = temp;
    }
}

template <class T>
void printArray(T arr, int arraySize){
    for(int i=0; i<arraySize; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    cout << "array 1" << endl;
    int arr1[] = {1,2,3,4,5,6,7};
    printArray(arr1,7);
    reverseArray(arr1,7);
    printArray(arr1,7);

    cout << endl << "array 2" << endl;
    char arr2[] = {'H','E','L','L','O'};
    printArray(arr2,5);
    reverseArray(arr2,5);
    printArray(arr2,5);

    return 0;
}
