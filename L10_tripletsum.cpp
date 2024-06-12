#include <iostream>
#include <math.h>
using namespace std;

void tripletsum(int arr1[],int size,int target){
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            for (int k=j+1;k<size;k++){
                if (arr1[i]+arr1[j]+arr1[k] == target){
                    cout<<arr1[i]<<" "<<arr1[j]<<" "<<arr1[k]<<endl;
                }
            }
        }
    }


}
int main(){
    
    int arr2[100] = {1,2,3,4,5,4,6,7,0};
    tripletsum(arr2,9,7);

}