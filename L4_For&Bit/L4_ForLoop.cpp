#include <iostream>
using namespace std;

int main(){
    int n;
    // cout<<'Enter the number'<<endl;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
 
    // }
    //sum
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum = sum+i;
    // }
    // cout<<sum<<endl;
    //Fibonacci
    // int a = 0;
    // int b = 1;
    // int c;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // for (int i=1;i<=n;i++){
    //     c= a+b;
    //     cout<<c<<endl;
    //     a = b;
    //     b= c;
    // }
    //Prime
    // bool isprime=1;
    // for (int i=2;i<n;i++){
    //     if(n%i!=0){
    //         continue;
    //     }
    //     else{
    //         isprime=0;
    //         cout<<"It is not Prime!!"<<endl;
    //         return 0;
    //     }
    // }
    // if (isprime){
    //     cout<<"It is Prime!!"<<endl;
    // }
    //Problem 1281

    int sum=0;
    int prod=1;
    while(n !=0){
        sum = sum+ (n%10);
        prod = prod * (n%10);
        n=n/10;
    }
    cout<<prod - sum<<endl;
        
}