#include <iostream>
#include <map>
using namespace std;
//prestoring and fetching
//create a ahash array or frequency array which keeps the count of the frequency of the numbers
//map contains the key(the number jo appear ho raha hain in the array) and the value (the frequency of the number that is appearing)...it is bascally a dictionary like in python.
//map stores all the value in sorted order
//time complexity is log(n)
//TC of Unordered map in best or average is O(1) varna in worst case, its O(N)
//collision in hashing is that everyone went to the same hash place...same hash index


int main(){
    int arr[5] = {1,2,3,2,5};
    // string s;
    // cin>>s;

    //NUmber Hashing
    // int hash[6] = {0};
    // for(int i=0;i<5;i++){
    //     hash[arr[i]] += 1;
    // }
    // int n;
    // cout<<"Which number to find: ";
    // cin>> n;
    // cout<<"The number appears "<<hash[n]<<" times!"<<endl;


    //character Hashing
    //or use map <char,int>
    // int hash[256] = {0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i]] ++;
    // }
    // char ch;
    // cout<<"Which charracter to find: ";
    // cin>> ch;
    // cout<<"The character "<<ch<< " appears "<<hash[ch]<<" times!"<<endl;


    //Using a hash map
    unordered_map <int,int> mpp;
    for(int i=0;i<5;i++){
        mpp[arr[i]]++;
    }
    int n;
    cout<<"Which number to find: ";
    cin>> n;
    cout<<"The number appears "<<mpp[n]<<" times!"<<endl;

    for(auto it: mpp){
        cout<<it.first<< " --> "<< it.second<<endl;
    }
    
}