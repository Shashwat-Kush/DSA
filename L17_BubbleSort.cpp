#include <iostream>
#include <math.h>
using namespace std;

//Time complexity: O(n^2)
//Space complexity: O(1)
//Stable: Yes
//Inplace: Yes
//Adaptive: Yes
//Bubble sort is stable and adaptive sorting algorithm. It is stable because it does not change the order of elements having the same value. It is adaptive because it takes advantage of existing order in its input. It is inplace because it does not require any extra space.
//Inplace means that the sorting is done in the same array without using any extra space.s

void BubbleSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==false){
            break;
        }
    }
}
int main(){
    int arr[5] = {4,3,6,5,8};
    BubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}