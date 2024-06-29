#include <iostream>
#include <math.h>
using namespace std;
// Visualize toh 2D array ho raha but save toh Linear array ki tarah ho raha tha
// row then column
// 

void colSum(int arr[][4], int row,int col){
    for (int j = 0;j<col;j++){
        int sum = 0;
        for(int i=0;i<row;i++){
            sum += arr[i][j];
        }
        cout<<"Sum of "<<j<<" Column is "<<sum<<endl;
    }
}
void rowSum(int arr[][4], int row, int col){
    for (int i=0;i<row;i++){
        int sum=0;
        for(int j=0; j<col;j++){
            sum += arr[i][j];
        }
        cout<<"Sum of "<<i<<" row is "<<sum<<endl;
    }
}

int largestRowsum(int arr[][4], int row,int col ){
    int maxi = INT16_MIN;
    int rowindex = -1;
    for (int i=0;i<row;i++){
        int sum=0;
        for(int j=0; j<col;j++){
            sum += arr[i][j];
        }
        if (sum > maxi){
            maxi = sum;
            rowindex = i;
        }

    }
    cout<<"largest Row sum is "<<maxi<<"and the index of that row is "<<rowindex;
    return rowindex; 
}


int main(){
    int arr[3][4];
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
    rowSum(arr, 3,4);
    colSum(arr, 3,4);
    int s = largestRowsum(arr,3,4);
}