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
int main(){
        char name[30];
        cin>>name;
      reverse(name);
}
