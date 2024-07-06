#include <iostream>
#include <math.h>
using namespace std;
void printnum(int i,int n){
    if (i>n){
        return;
    }
    else{
        cout<<i<<" ";
        printnum(i+1,n);
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    printnum(1,n);
}