#include <iostream>
#include <math.h>
using namespace std;
//Binary search is always applied on monotonic function i.e. either increasing or decreasing.
//Time complexity is O(logn) for binary search.
//Take out the mid element
//If mid element is equal to key, return true
//If mid element is greater than key, then search in left half
//If mid element is smaller than key, then search in right half
//Now take the mid element of the right half and repeat the process.
//If matches..return the index
//If not found, return -1

int BinarySearch(int arr[],int size, int key){
    int start=0;
    int end = size-1;
    //there can be chance when start and end are very large...so addition of start and end can exceed the limit of int.
    // int mid = (start+end)/2;
    //So we do something else here
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if (key<arr[mid]){
            end = mid-1;
        }  
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){
    
    int even [6] = {2,4,6,8,12,18};
    int odd [5] = {3,8, 11, 14, 16};
    int ans1 = BinarySearch(even,6,19);
    int ans2 = BinarySearch(odd,5,11);
    if(ans1!=-1){
        cout<<"Found at index "<<ans1<<endl;
    }
    else{
        cout<<"Not Found!!"<<endl;
    }
    if(ans2!=-1){
        cout<<"Found at index "<<ans2<<endl;
    }
    else{
        cout<<"Not Found!!"<<endl;
    }
    
}