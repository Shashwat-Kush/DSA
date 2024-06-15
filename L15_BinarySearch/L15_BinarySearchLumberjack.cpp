#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int diffsum=0;
    for (int i=0; i<n; i++){
        cout<<"Iteration "<<i<<endl;
        cout<<arr[i]<<" "<<mid<<endl;
        diffsum = diffsum + max(0,arr[i]-mid);
        cout << diffsum << endl;
    }
    if (diffsum>=k){
        return true;
    }
    return false;
}
int minHeight(int arr[], int n , int k){
    int start = 0;
    int end=*max_element(arr, arr + n);
    // for (int i = 0;i<n;i++){
    //     end = end+ arr[i];
    // }
    cout<<"initial ending is: "<<end<<endl;
    int mid = start + (end-start)/2;
    cout<<"initial mid is: "<<mid<<endl;
    while(start<=end){
        if(isPossible(arr,n,k,mid)){
            start = mid+1;
            cout<<"start updated to "<<start<<endl;
        }
        else{
            end = mid-1;  
            cout<<"end  updated to "<<end<<endl;
        }
        mid = start + (end-start)/2;
    }
    return end;
}
int main(){
    int arr[5] = {4,42,40,26,46};
    cout<<minHeight(arr,5,20)<<endl;
}