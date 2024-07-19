#include <iostream>
#include <vector>
using namespace std;
//pick the pivot
//Place it on its correct place
//Smaller on the left and bigger on the right
//

void print(vector<int> &arr,int low,int high){
    for (int i=low;i<high;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partition (vector<int> &arr,int low,int high){
    // cout<<"Now invoking the partition function"<<endl;
    int pivot = arr[low];
    // cout<<"Pivot is "<<pivot<<endl;
    int i=low;
    int j=high;
    // cout<<"We will be working on this array: ";
    // print(arr,low,high);
    while(i<j){
        // cout<<"At the start of the loop, I and J are "<<i<<" and "<<j<<endl;
        while(arr[i]<=pivot && i<=high-1){
            // cout<<"Now i is "<<i<<endl;
            i++;
        }
        // cout<<"i after 1st while is "<<i<<endl;
        while(arr[j]> pivot && j>=low+1){
            // cout<<"Now j is "<<j<<endl;
            j--;
        }
        // cout<<"j after 2nd while is "<<j<<endl;
        // cout<<"Array before swapping is: ";
        // print(arr,low,high);
        if(i<j) swap(arr[i],arr[j] );
        // cout<<"Array after swapping is: ";
        // print(arr,low,high);
    }
    // cout<<"swapping "<<arr[low]<<" "<<arr[j]<<endl;
    swap(arr[low],arr[j]);
    return j;
}

void qs(vector <int> &arr,int low,int high ){
    // cout<<"In the qs, low and high are "<<low<<" and "<<high<<endl;
    if(low<high){
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}

int main(){
    vector <int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    cout<<"Before array is: ";
    print(arr,0,arr.size());
    qs(arr,0,arr.size()-1);
    cout<<"After array is: ";
    print(arr,0,arr.size());

}