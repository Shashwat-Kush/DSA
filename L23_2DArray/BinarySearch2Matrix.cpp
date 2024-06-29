#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int arr[5][5] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 9;
    int rowIndex =0;
    int colIndex = 4;
    while(rowIndex<=4 && colIndex>=0){
        int element = arr[rowIndex][colIndex];
        if(element ==target){
            cout<<"Found";
            return 1;
        }
        if (element<target){
            rowIndex++;
        }
        else {
            colIndex--;
        }
    }
    cout<<"Not found";
    return 0;
}