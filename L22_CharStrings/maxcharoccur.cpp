#include <iostream>
#include <math.h>
using namespace std;

int maxi(int arr[],int n){
    int maxim = INT_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>maxim){
            maxim = arr[i];
        }
    }
    
    for (int i=0;i<n;i++){
        if (maxim ==arr[i]){
            cout<<"Max Occurance is of "<<char('a'+i)<<" and they occur  "<<maxim<<" times!"<<endl;
        }
    }
    return maxim;
}
int* maxoccur(string s, int arr[]){
    
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            arr[s[i]-'a']++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            arr[s[i]-'A']++;
        }
    }
    return arr;
}
int main(){
    int arr[26] = {0};
    string s;
    cin>>s;
    maxi(maxoccur(s,arr),26);
}