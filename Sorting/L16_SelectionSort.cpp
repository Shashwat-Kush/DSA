#include <iostream>
#include <math.h>
using namespace std;
//There are different rounds or passes in selection sort
//In each round, we select the smallest element and place it on its righful place
//time complexity is O(n^2)
//space complexity is O(1)
// When the array size is small, selection sort is better.
//Stability is not maintained in selection sort
//Srtability means if there are two elements with same value, then their relative order should be same in the sorted array.
//Selection sort is not stable because it swaps the elements.
//Selection sort is not adaptive because it does not take advantage of the fact that the array is already sorted.

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex = i;
        for (int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }swap(arr[i],arr[minindex]);
    }
}
int main(){
    int arr[5] = {4,3,6,5,8};
    selectionSort(arr,5);
    printArray(arr,5);
}