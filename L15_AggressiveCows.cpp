#include <iostream>
#include <math.h>
using namespace std;
//Given an array of length 'N', where each element denotes the position of a stall. Now you have 'N' stalls and an integer 'K' which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.
bool isPossible(int arr[], int k, int mid, int n){
    int cows=1;
    int lastpos = arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]-lastpos >=mid){
            cows++;
            if (cows==k){
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}
int aggressiveCows(int arr[], int n,int k){
    int start = 0;
    int end = -1;
    int ans = -1;
    for (int i=0;i<n;i++){
        end = max(end,arr[i]);
    }
    int mid = start + (end-start)/2;
    while(start<=end){
        if(isPossible(arr,k,mid,n)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[5] = {10 ,1 ,2 ,7 ,5};
    cout<<aggressiveCows(arr,5,3)<<endl;
}