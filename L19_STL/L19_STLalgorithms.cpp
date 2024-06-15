#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);
    v.push_back(13);
    v.push_back(15);

    cout<<binary_search(v.begin(), v.end(), 4)<<endl;
    cout<<binary_search(v.begin(), v.end(), 7)<<endl;

    cout<<"lower bound→> "<<static_cast<int>(lower_bound(v.begin(),v.end() ,3)-v.begin())<<endl;
    cout<<"Uppper bound-> "<<static_cast<int>(upper_bound(v.begin(), v.end(), 3) -v.begin())<<endl;

    int a = 10, b = 20;
    cout<<"max -> "<<max(a, b) ;
    cout<<"min -> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a -> "<<a<<" b -> "<<b<<endl;

    string a1 = "abc";
    string b1 = "def";
    reverse(a1.begin(), a1.end());
    cout<<"a1 -> "<<a1<<endl;

    rotate(v.begin(), v.begin()+3, v.end());
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    
}