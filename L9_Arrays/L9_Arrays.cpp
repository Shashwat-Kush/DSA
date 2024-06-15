#include <iostream>
#include <math.h>
using namespace std;
//Bag in which same/similar type of values can be kept.
//COntinuous memory allocation
//Indexing can be done 
//Multiple values in the same variable
//the variable will be giving the address of the first element in the memory buffer

void printarr(int array[], int size){
    for (int i=0; i<size; i++){
        cout << "Value at " << i << " index " << array[i]<< endl;
    }
}
int main(){

    int array[3]={3,5,7};
    cout << "Value at 2 index " << array[2]<< endl;

    int third[15] = {2,3};
    printarr(third, 15);
    
    cout<<endl;
    int fourth[10] = {0};
    printarr( fourth, 10);
    
    cout<<endl;
    int fifth[10] = {1};
    printarr( fifth, 10);


}