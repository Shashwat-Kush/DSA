#include <iostream>
#include <math.h>
using namespace std;

void bubble(int arr[],int n){
    if (n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"Now the array is like: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble(arr,n-1);
}

int main(){
    int arr[5] = {5,4,3,2,1};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}