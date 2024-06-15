#include <iostream>
#include <math.h>
using namespace std;

//This is the two-pointer approach!!

void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort01_v2(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<j){
        while(i<j && arr[i]==0){
            i++;
        }
        while(i<j && arr[j]==1){
            j--;
        }
        if (i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    printArray(arr,size);
}
void sort01(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if (arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
    }
    
    printArray(arr,size);
}
int main(){
    
    int arr3[100] = {0,1,0,1,1,0,1,1,0};
    sort01_v2(arr3,9);
    sort01(arr3,9);

}