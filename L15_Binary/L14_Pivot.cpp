#include <iostream>
#include <math.h>
using namespace std;
//Problem 81, 33
int binarysearch(int arr[],int start,int end, int key){
    
    int mid = start+(end-start)/2;
    while(start <= end){
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int getpivot(int arr[],int n){
    int start =0;
    int end = n-1;
    int mid = start +(end-start)/2;
    while(start<end){
        if (arr[mid] > arr[end]) {
                start = mid + 1;
        } 
        else if (arr[mid] < arr[end]){
            end = mid;
        }
        else{
            end--;
        }
        mid = start +(end-start)/2;
    }
    cout<<"Pivot is "<<start<<endl;
    return start;
}

int SearchRotatedArray(int arr[],int n, int key){
    int pivot = getpivot(arr,n);
    if (key>=arr[pivot] && key<=arr[n-1]){
        return binarysearch(arr,pivot,n-1,key);
    }
    else{
        return binarysearch(arr,0,pivot-1,key);
    }
}

bool search(int nums[], int n, int target) {
        int pivot = getpivot(nums, n);
    if (binarysearch(nums, 0, pivot - 1, target) != -1 || binarysearch(nums, pivot, n - 1, target) != -1) {
            return true;
        }
        return false;
    }
int main(){
    int arr[19] = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    // cout<<getpivot(arr,5)<<endl;

    cout<<SearchRotatedArray(arr,19,2)<<endl;
    cout<<search(arr,19,2)<<endl;
}