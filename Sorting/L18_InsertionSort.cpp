#include <iostream>
#include <math.h>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0&& arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}


int main(){
    int arr[5] = {4,3,6,5,8};
    InsertionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}