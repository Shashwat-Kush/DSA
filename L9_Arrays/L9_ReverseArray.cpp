#include <iostream>
#include <math.h>
using namespace std;

void reverseArray1(int array[],int size){
    for (int i=0;i<size/2;i++){
        int temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }

}
void reverseArray2(int array[],int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}

void printArray(int array[],int size){
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

}
int main(){
    int array1[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int array2[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    // for (int i=0;i<3;i++){
    //     int temp = array[i];
    //     array[i] = array[5-1-i];
    //     array[5-1-i] = temp;
    // }
    reverseArray1(array1,13);
    printArray(array1,13);
    cout<<endl;
    reverseArray2(array2,14);
    printArray(array2,14);
}