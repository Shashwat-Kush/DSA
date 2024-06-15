#include <iostream>
#include <math.h>
using namespace std;

//Here the concept of the pass by value is seen where the copy is made from the main function to the called function when passed the value...main ki values ka copy is passed into the called function and the changes made in the called function are not reflected in the main function.

//Jab same thing from main is paased to the called function where no copy is passes, then it called pass by reference.


void dummy (int n){
    n++;
    cout << " n is " << n <<endl;
}

int main(){
    int n;
    cin>>n;

    dummy(n);

    cout<<"number n is " << n << endl;
}