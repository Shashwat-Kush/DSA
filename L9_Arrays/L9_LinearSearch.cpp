#include <iostream>
#include <math.h>
using namespace std;

//Time complexity is O(n) for linear search.

bool search(int arr[],int size,int key){
    for (int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int key;
    cin>>key;
    if(search(arr,10,key)){
        cout<<"Found!!"<<endl;
    }
    else{
        cout<<"Not Found!!"<<endl;
    }

}