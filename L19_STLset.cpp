#include <iostream>
#include <set>
using namespace std;
//set is a container that stores unique elements following a specific order
//set is implemented using BST
//koi bhi element insert karne par wo sorted order me insert hoga
// ya to daalo ya delete kar do
//Unordered set is bit fast and they are not in sorted order obviously

//Insertion and deletion is O(logn)
//Searching is O(logn)

int main(){
    set<int> s;
    s. insert (5);
    s. insert (1);
    s. insert (6);
    s. insert (0);
    for(int i : s) {
    cout<<i<<" ";
    }cout<<endl;

    s. erase(s.begin());
for(auto i : s) {
cout<<i<<" ";
}cout<<endl;
    set<int>:: iterator it = s. begin();
    it++;
    s.erase(it);
    for(auto i : s) {
    cout<<i<<" ";
    }
    cout<<endl;
}