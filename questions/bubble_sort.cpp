#include<iostream>
using namespace std;

void printArray(int arr[], int arrSize){
    for(int i=0; i<arrSize; i++){
        cout << arr[i] << " " ;
    }
}

void bubbleSort(int arr[],int arrSize){
    int temp;
    for(int i=0; i<arrSize-1; i++){
        for(int j=0; j<arrSize-1; j++ ){
            if(arr[j] > arr[j+1]){
             temp     = arr[j+1];
             arr[j+1] = arr[j];
             arr[j]   = temp;
            }
        }
    }
}
int main(){

    int arr[] = {46,11,22,45,1,10};
    printArray(arr,6);
    cout << endl << "bubble sort" << endl;
    bubbleSort(arr,6);
    printArray(arr,6);
    return 0;
}
