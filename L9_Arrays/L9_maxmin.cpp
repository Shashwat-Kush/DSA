#include <iostream>
#include <math.h>
using namespace std;


//In the case of variable and a function, a copy is given to the funtion thus not changing the values of the variable in the main function...

//In the case of array calling , we are passing the address of the aray to the function so when any kind of change is going to happen, then the function will make changes to the actual values of the array.

int getmax(int arr[],int size){
    int maxi = INT_MIN;
    for (int i=0;i<size;i++){
        maxi = max(maxi,arr[i]);
        // if (arr[i]>max){
        //     max = arr[i];
        // }
    }
    return maxi;
}
int getmin(int arr[],int size){
    int mini = INT_MAX;
    for (int i=0;i<size;i++){
        mini = min(mini,arr[i]);
        // if (arr[i]<min){
        //     min = arr[i];
        // }
    }
    return mini;
}

int main(){
    int size;
    cin>>size;
    int num[100];
    for (int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Max: "<<getmax(num,size)<<endl;
    cout<<"Min: "<<getmin(num,size)<<endl;
}