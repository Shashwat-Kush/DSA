#include <iostream>
#include <math.h>
using namespace std;

int len(char arr[]){
    int count =0;
    int i=0;
    while (arr[i] !='\0'){
        count++;
        i++;
    }
    return count;
}
void reverse(char arr[]){
    for (int i = len(arr)-1;i>=0;i--){
        cout<<arr[i];
    }
    cout<<endl;
}
void reverse2(char arr[]){
    int start = 0;
    int end = len(arr)-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
    for (int i=0;i<len(arr);i++){
        cout<<arr[i];
    }
    cout<<endl; 
}
int main(){
        char name[30];
        cin>>name;
      reverse(name);
      reverse2(name);
}
