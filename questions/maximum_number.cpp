#include<iostream>
using namespace std;

template <class T>
T findMaxNumber(T arr[], int arrSize){
    T maximumNumber = arr[0];
    for(int i=1; i<arrSize; i++){
        if(maximumNumber < arr[i]){
            maximumNumber = arr[i];
        }
    }
    return maximumNumber;
}

int main(){

    int arr[] = {1,2,3,4};
    cout << "maximum number in arr = " << findMaxNumber(arr,4);

    float arr1[] = {1.2f,3.2f,2.2f};
    cout << "\nmaximum number in arr1 = " << findMaxNumber(arr1,3);
    return 0;
}
