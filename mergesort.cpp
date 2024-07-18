#include <iostream>
#include <vector>
using namespace std;
//divide and merge
//divides the array hypothetically
//moment i get a single number, stop
//

void merge(vector<int>& a, int low,int mid,int high){
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid &&right<=high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
            right++;
    }
    for(int i=low;i<=high;i++){
        a[i] = temp[i-low];
    }
    
}
void mergeSort(vector <int>& arr, int low,int high){
    if (low>=high){
        return;
    }
    int mid = low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr, low,mid,high);
}
int main(){
    vector <int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    for(auto a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,arr.size()-1);
    for(auto a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    
}