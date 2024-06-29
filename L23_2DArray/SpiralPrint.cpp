#include <iostream>
#include <vector>
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

vector<int> spiralOrder(vector<vector<int> >& matrix) {
        int count =0;
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row*col;

        int startingRow = 0;
        int startingCol = 0;
        int lastRow = row-1;
        int lastCol = col-1;

        while(count < total){
            //Starting row
            for(int i = startingCol;i<lastCol;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            //last column

            for (int i=startingRow;i<lastRow;i++){
                ans.push_back(matrix[i][lastCol]);
                count++;
            }
            lastCol--;

            //
            for(int i=lastCol;i>=startingCol;i--){
                ans.push_back(matrix[lastRow][i]);
                count++;
            }
            lastRow--;
            //Fiest col
            for(int i = lastRow;i>=startingRow;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
int main(){
    vector<vector<int> > mat(3, vector<int>(3));
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin>> mat[i][j];
        }
    }
    vector<vector <int> >& a = spiralOrder(mat);
    for( int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}