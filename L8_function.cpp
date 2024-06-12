#include <iostream>
#include <math.h>
using namespace std;


//Without Functions, the code can be bulky, buggy and non-readable;
//Function is a program with a well defined task that can be reused in the program.

//Function Stack --> Jisko sabse pehle rakha gaya tha ...usko sabse baad me uthayenge ...LIFO
//Initially Main is called...then ncr function..then factorial wala function...
//as factorial has returned an answer...ncr wala input lekar process karega....that later on main wala execute karega


int power(int a, int b){
    int res=1;
    for (int i=0;i<b;i++){
        res = res *a;
    }
    return res;
}

bool isEven(int a){
    if (a%2==0){
        return true;
    };
    return false;
}

int factorial(int a){
    int res=1;
    for (int i=1;i<=a;i++){
        res = res *i;
    }
    return res;
}

int ncr(int n, int r){
    int res = factorial(n)/(factorial(r)*factorial(n-r));
    return res;
}

bool isPrime(int a){
    for (int i=2;i<=sqrt(a);i++){
        if (a%i==0){
            return false;
        }
    }
    return true;

}

int main(){

    //pow 
    // int a,b;
    // cout << "Enter the base and power : ";
    // cin>>a>>b;
    // int res=1;
    // for (int i=0;i<b;i++){
    //     res = res *a;
    // }
    // cout<<"Result :"<<res<<endl;

    int a,b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<answer<<endl;
    

    cout<<"The fact that first number is even is "<<isEven(a)<<endl;

    cout<<"Factorial of first number is : "<<factorial(a)<<endl;

    cout<<"The nCr of first and second number is : "<<ncr(a,b)<<endl;

    cout<<"The first number is prime : "<<isPrime(a)<<endl;
}