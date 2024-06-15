#include <iostream>
#include <math.h>
using namespace std;

int ap(int n){
    return (3*n+7);
}

int setbit(int n){
    int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;

}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int n1,n2;
    cin >> n1>>n2;
    cout <<"AP term is "<< ap(n1) << endl;
    cout <<"Number of set bits in n1 and n2 combined is "<< setbit(n2) + setbit(n1) << endl;
    cout<<"Fibonacci of n1 is "<< fibonacci(n1) << endl;
}