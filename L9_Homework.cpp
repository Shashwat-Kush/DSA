#include <iostream>
#include <math.h>
using namespace std;

int sum(int arr[],int size){
    int sum = 0;
    for (int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int a[100];
    int size;
    cin>>size;
    for (int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Sum: "<<sum(a,size)<<endl;
}