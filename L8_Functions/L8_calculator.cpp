#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the numbers : ";
    cin >> a >> b;
    cout<<"Enter the Operator : ";
    char op;
    cin >> op;

    switch (op){
        case '+': cout << a+b<<endl; break;
        case '-' : cout << a-b<<endl; break;
        case '*' : cout << a*b<<endl; break;
        case '/' : cout << a/b<<endl; break;
        case '%' : cout << a%b<<endl; break;
        default : cout << "Invalid Operator"<<endl; break;
    }

}