#include <iostream>
using namespace std;

int main(){
    //LOOPS
    int i=0;
    int n;
    cin>>n;
    while (i<=n){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    //sum
    i = 0;
    int sum = 0;
    while (i<=n){
        sum = sum+i;
        i++;
    }
    cout<<"Sum is "<<sum<<endl;

    //even number sum
    i=0;
    sum = 0;
    while(i<=n){
        if (i%2==0){
            sum = sum+i;
            
        }
        i++;
    }
    cout<<"Even Sum is "<<sum<<endl;

    //Prime
    i=2;
    while(i<n){
        if (n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            break;
        }
        i++;
        if (i==n){
            cout<<n<<" is a prime number"<<endl;
        }
    }

}