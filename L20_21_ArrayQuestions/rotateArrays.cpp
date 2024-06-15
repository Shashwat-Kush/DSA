#include <iostream>
#include <vector>
using namespace std;
vector <int> rotateArray(vector <int>v , int d){
    vector <int> temp;
    for (int i = d+1;i<v.size();i++){
        temp.push_back(v[i]);
    }
    for (int i = 0;i<=d;i++){
        temp.push_back(v[i]);
    }
    return temp;
}

vector <int> rotateArray2 (vector<int> nums){
    
}
int main(){
    vector <int> v;
    int n;
    cin>>n;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v = rotateArray(v,n);
    for(auto i:v){
        cout<<i<<" ";
    }
}