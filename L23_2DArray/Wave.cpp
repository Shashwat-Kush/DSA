#include <iostream>
#include <math.h>
using namespace std;
void input(int arr[][3],int row, int col){
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>> arr[i][j];
        }
    }
}
void print(int arr[][3],int row, int col){
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void colWave(int arr[][3],int row,int col){
    for (int j=0;j<col;j++){
        if (j%2 ==0){
            //Go down
            for (int i=0;i<row;i++){
                cout<<" "<<arr[i][j]<<" ";
            }
        }
        else{
            //Go up
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j];
            }
        }
    }
    cout<<endl;
}
int main(){
    int arr[3][3];
    input(arr,3,3);
    print(arr,3,3);
    colWave(arr,3,3);
}