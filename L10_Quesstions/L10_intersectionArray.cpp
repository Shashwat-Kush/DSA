#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void intersection(int nums1[],int size1,int nums2[],int size2){
    sort(nums1,nums1+size1);
    sort(nums2,nums2+size2);
    int i=0;
    int j=0;
    while(i<size1 && j<size2){
        if(nums1[i]==nums2[j]){
            int count=0;
            cout<<"something matched!!";
            for (int k=0;k<j;k++){
                cout<<"checking for the copycats!";
                if (nums2[k]==nums2[j]){
                    count++;
                }
            }
            if (count==0){
                cout<<nums1[i]<<" ";
                i++;
                j++;
            }
            
        }
        else if (nums1[i]<nums2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr1[100] = {1,2,2,1};
    int arr2[100] = {2,2};
    intersection(arr1,4,arr2,2);
    // printArray(arr1,4);

}