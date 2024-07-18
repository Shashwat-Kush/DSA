#include <iostream>
#include <math.h>
using namespace std;
void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void InsertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0&& arr[j]<arr[j-1]){
            cout<<"For "<<i<<" th round, Array is : ";
            printArray(arr,n);
            swap(arr[j],arr[j-1]);
            cout<<"After swapping in the  "<<i<<" th round, Array is : ";
            printArray(arr,n);
            j--;
        }
    }
}


int main(){
    int arr[5] = {8,7,6,5,4};
    InsertionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}