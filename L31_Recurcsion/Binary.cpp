#include <iostream>
#include <math.h>
using namespace std;
//Sroting
bool sorted(int arr[], int n){
    if (n==1 || n==0){
        return true;
    }
    if (arr[0]>arr[1]){
        return false;
    }
    else{
        return sorted(arr+1,n-1);
    }
}

//SumArray
int sum(int arr[],int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return arr[0];
    }
    else{
        return arr[0]+ sum(arr+1,n-1);
    }
}


//linear search
bool linear(int arr[],int n,int target){
    if (n==0){
        return false;
    }
    if (arr[0]==target){
        return true;
    }
    else{
        return linear(arr+1,n-1,target);
    }
}

//Binary search
bool binary(int arr[], int s,int e,int target){
    
    if (s>e){
        return false;
    }

    int mid = s+(e-s)/2;

    if(arr[mid]==target){
        return true;
    }
    else if (arr[mid]>target){
        return binary(arr,s,mid-1,target);
    }
    else {
        return binary(arr,mid+1,e,target);
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    // cout<<sorted(arr,5)<<endl;
    // cout<<sum(arr,5)<<endl;
    // cout<<linear(arr,5,3)<<endl;
    cout<<binary(arr,0,4,1)<<endl;
}