#include <iostream>
#include <vector>
using namespace std;
vector<int> moveZeroes(vector<int> nums){
    int n = nums.size();
    for (int i=0;i<n;i++){
        if(nums[i]==0){
            for (int j=i+1; j<n;j++){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        }
    }
    return nums;
}

vector <int> moveZeroes2(vector<int> nums){
    int n = nums.size();
    int count = 0;
    for (int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[count]);
            count++;
        }
    }
    return nums;
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);
    v = moveZeroes(v);
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    cout<<endl;
    vector<int> v1;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);
    v1 = moveZeroes2(v1);
    for(int i:v1){
        cout<<i<<" ";
    }
}