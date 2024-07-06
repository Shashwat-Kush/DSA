#include <iostream>
#include <math.h>
using namespace std;
//Function calling itself is recursion
//used when the solution of the bugger problem is dependent on the same type of smaller problem
//We need a base case to know where to stop...here return is mandatory
//We need a recusive relation

int factorial(int n){
    if (n ==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int power(int num, int pow){
    if (pow ==0){
        return 1;
    }
    else{
        return num* power(num,pow-1);
    }
}

int fibonacci(int num){
    if (num==0){
        return 0;
    }
    if (num ==1){
        return 1;
    }
    else{
        return fibonacci(num -1)+ fibonacci(num -2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<power(n,n)<<endl;
    cout<<fibonacci(n)<<endl;
    
}