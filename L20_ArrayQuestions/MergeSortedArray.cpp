#include <iostream>
#include <vector>
#include <algorithm> // Add this line to include the <algorithm> header
using namespace std;
vector<int> mergeVector(vector<int> v1, vector<int> v2, vector<int>v3){
    for (int i = 0; i < static_cast<int>(v1.size()); i++){
        v3.push_back(v1[i]);
    }
    cout<<endl;
    for (int i:v1){
        cout<<i<<" ";
    }
    for (int i = 0; i < static_cast<int>(v2.size()); i++){
        v3.push_back(v2[i]);
    }
    cout<<endl;
    for (int i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v3.begin(), v3.end());

    return v3;
}

int main(){
    vector<int> v1;
    vector<int> v2;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);
    v2.push_back(10);

    // vector<int> v3(v1.size() + v2.size()); 
    // merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    // for(int i = 0; i < static_cast<int>(v3.size()); i++){
    //     cout<<v3[i]<<" ";
    // }
    vector<int> v4;
    v4 = mergeVector(v1,v2,v4);
    for(int i:v4){
        cout<<i<<" ";
    }
}