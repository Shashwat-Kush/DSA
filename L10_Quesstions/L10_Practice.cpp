#include <iostream>
#include <math.h>
using namespace std;

void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapArray(int arr[],int size){
    for (int i=0;i<size-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

void unique(int arr[],int size){
    int res =0;
    int sum = 0;
    for (int i=0;i<size;i++){
        res = res ^ arr[i];
        cout<<"res for "<<i<<" term is"<<res<<endl;
        sum+=arr[i];
        cout<<"sum for "<<i<<" term is"<<sum<<endl;
    }
    cout<<"Unique element is "<<res<<endl;
    
}

void duplicate(int arr[],int size){

    for(int i=0;i<size-1;i++){
        cout<<(arr[i]^arr[size-1])<<endl;
        if ((arr[i]^arr[size-1]) == 0){
            cout<<"Duplicate element is "<<arr[i]<<endl;
            return ;
        }
        }
}

void duplicate2(int arr1[],int size1,int arr2[],int size2){
    for (int i=0;i<size1;i++){
        for (int j=0;j<size2;j++){
            if (arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j] = -20000;
                break;
            }
        }
    }
}





int main(){
    // int arr[100] = {0,1,2,3,4,5,6,7,8};
    // swapArray(arr,9);
    // printArray(arr,9);

    // int arr1[100] = {1,2,3,4,2,6};
    // int arr2[100] = {1,2,3,4,5,4,6,7,0};
    int arr3[100] = {0,1,0,1,1,0};
    // unique(arr2,5);
    // duplicate(arr2,5);
    // duplicate2(arr1,6,arr2,9);
    // tripletsum(arr2,9,7);
    sort01(arr3,6);
    
    return 0;

}