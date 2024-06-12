#include <iostream>
#include <math.h>
using namespace std;
//Given an array of length N and k painters.
//Each painter takes 1 unit of time to paint 1 unit of board.
//Each painter can paint contiguous sections of the board.
//Find the minimum time to paint the board/array.
//Similar to Book Allocation
bool isPossible(int arr[],int n, int k,int mid){
    int painters =1;
    int sum =0;
    for (int i=0; i<n; i++){
        if (sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            painters ++;
            if(painters>k || arr[i]>mid){
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}
int minTimeToPaint(int arr[], int size, int n, int k){
    int sum =0;
    int ans=-1;
    int start = 0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    int end = sum;
    int mid = start + (end-start)/2;
    while(start <=end){
        if (isPossible(arr,n,k,mid)){
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[4] = {10,20,30,40};
    cout<<minTimeToPaint(arr,4,4,2)<<endl;
}