#include <iostream>
#include <math.h>
using namespace std;
//Array of books me data that is the number of pages in the book
//m students....sabke paas ek book honi  chahiye and har book distribute honi chahiye
//contiguous memory allocation to students

//Get the search space

bool isPossible(int arr[], int n, int m, int mid){
    int students = 1;
    int pages =0;
    for (int i=0;i<n;i++){
        if (pages + arr[i]<= mid){
            pages += arr[i];
        }
        else {
            students++;
            if (students>m || arr[i]>mid){
                return false;
            }
            pages=arr[i];
        }
        }
        return true;
    }

int bookAllocate(int arr[], int size, int n, int m){
    int sum=0;
    int start = 0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    int end = sum;
    int ans =-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if (isPossible(arr,n,m, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[6] = {2, 1, 5, 6, 2, 3};
    cout<<bookAllocate(arr,6,6,2)<<endl;
}