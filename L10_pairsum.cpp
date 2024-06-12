#include <iostream>
#include <math.h>
using namespace std;


void pairsum(int arr1[],int size,int target){
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr1[i]+arr1[j] == target){
                cout<<arr1[i]<<" "<<arr1[j]<<endl;
            }
        }
    }

}

int main(){
    
    int arr2[100] = {1,2,3,4,5,4,6,7,0};
    pairsum(arr2,9,7);

}