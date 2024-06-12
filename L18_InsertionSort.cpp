#include <iostream>
#include <math.h>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void InsertionSort(int arr[], int n){
    for (int i = 1; i<n; i++) {
    cout<<"Iteration "<<i<<endl;
    int temp = arr[i];
    cout<<"Temp: "<<temp<<endl;
    int j = i-1;
    cout<<"J: "<<j<<endl;
    cout << "Array: ";
    printArray(arr, n);
    for (; j>=0; j--) {
        cout<<"Comparing "<<temp<<" and "<<arr[j]<<endl;
    if(arr[j] > temp) {
        cout<<"Swapping "<<arr[j]<<" and "<<arr[j+1]<<endl;
        arr[j+1] = arr[j];
    }
    cout<<"Array: ";
    printArray(arr,n);
    cout<<"Swapping "<<temp<<" and "<<arr[j+1]<<endl;
    arr [j+1] = temp;
    cout<<"Array:";
    printArray(arr,n);
    }
}
} // Add this closing brace

int main(){
    int arr[5] = {4,3,6,5,8};
    InsertionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}