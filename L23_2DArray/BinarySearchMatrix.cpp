#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 5;
    int start = 0;
    int end  = 12;
    int mid = start + (end-start)/2;
    while(start<=end){
        if ((arr[mid/3][mid%4])==target){
            cout<<"Found";
            return 1;
        }
        else if (arr[mid/3][mid%4]<target){
            start = mid+1;
        }
        else if(arr[mid/3][mid%4]>target){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    cout<<"Not Found";
    return 0;
}