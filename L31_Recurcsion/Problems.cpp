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

}

//sum of natural number
void sumNatural1(int n, int sum){
    if (n<1){
        cout<<sum;
        return;
    }
    else{
        sumNatural1(n-1, sum+n);
    }
}
int sumNatural2(int n){
    if (n==0){
        return 0;
    }
    else{
        return (n + sumNatural2(n-1));
    }
}

//Reversing the array
void reversearray(int arr[],int s, int e){
    if (s>=e){
        return;
    }
    else{
        swap(arr[s], arr[e]);
        reversearray(arr, s+1,e-1);
    }
}

//Palindrome checker
bool palindromeCheck(string &arr,int st){
    if (st>=(arr.size()/2)){
        return true;
    }
    if (arr[st] != arr[arr.size()-st-1]){
        return false;
    }
    else{
        return palindromeCheck(arr,st+1);
    }
}


int main(){
    int n;
    /*
    cin>>n;
    printnum(1,n);
    cout<<endl;
    sumNatural1(n,0);
    cout<<endl;
    cout<<sumNatural2(n)<<endl;
    
    int arr[5] = {1,3,7,4,5};
    reversearray(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    */
    string s;
    cin>>s;
    cout<<palindromeCheck(s,0)<<endl;
}