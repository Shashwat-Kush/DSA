#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int array2number(vector<int> v){
    int unit = 1;
    int num = 0;
    for (int i = v.size()-1;i>=0;i--){
        num = num+ (v[i]*unit);
        unit = unit*10;

    }
    cout<<num<<endl;
    cout<<"converted to number done";
    return num;
}

vector <int> number2array(int num){
    vector<int> arr;
    while((num%10) !=0){
        arr.push_back(num%10);
        num = num/10;
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"converted to array done!";
    reverse(arr.begin(),arr.end());
    return arr;
}

vector<int> sum2array(vector<int> v1, vector<int>v2){
    return number2array(array2number(v1) + array2number(v2));
}
int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> ans;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    ans = sum2array(v1,v2);
    for (int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}