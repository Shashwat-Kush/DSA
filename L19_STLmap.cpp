#include <iostream>
#include <map>
using namespace std;
//Map is a key value pair
//sari keys unique hoti hain 
//isme multiple keys ek value ko point kar sakti hain but not reverse that is multiple values ek key ko point nahi kar sakti
//Map is implemented using BST
//Insertion and deletion is O(logn)
//Sorted order me aata hain data

int main(){
    map<int, string> m;
    m[1] = "abc";
    m[2] = "cdc";
    m[13] = "def";
    // m.insert({4, "ghi"});
//     for (pair<const int, string> i : m)
//     {
//         cout << i.first <<" "<<i.second<< endl;
//     }
//    cout<<"finding 13 -> "<<m. count (13) <<endl;
//    cout<<"finding -13- "<<m. count (-13) <<endl;
//    cout<<"Before erase"<<endl;
//    for(auto i : m) {
//        cout<<i.first<<" "<<i.second<<endl;
//    }
    // m. erase (13);
    // cout<<"After erase"<<endl;
    // for(auto i : m) {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    auto it = m.find(2);
    for(auto i = it; i != m.end(); i++) {
        cout << i->first << " " << i->second << endl;
        cout<<(*i).first<<endl;
    }
}