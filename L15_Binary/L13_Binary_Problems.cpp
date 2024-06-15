#include <iostream>
#include <math.h>
using namespace std;

//First and Last Position of an Element In Sorted Array
int firstocc(int arr[],int n, int key){
    int start =0;
    int end = n-1;
    int mid = start +(end-start)/2;
    int ans = -1;
    while(start <= end){
        if (arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if (arr[mid]< key){
            start = mid+1;
        }
        else if (arr[mid]> key){
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int lastocc(int arr[],int n, int key){
    int start =0;
    int end = n-1;
    int mid = start +(end-start)/2;
    int ans = -1;
    while(start <= end){
        if (arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if (arr[mid]< key){
            start = mid+1;
        }
        else if (arr[mid]> key){
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[10] = {1,2,3,3,3,3,3,3,3,5};
    int ans = firstocc(arr,10,3);
    cout<<"First occurance is at index "<<ans<<endl;
    int ans2 = lastocc(arr,10,3);
    cout<<"Last occurance is at index "<<ans2<<endl;
    cout<<"No of occurances is "<<ans2-ans+1<<endl;
}