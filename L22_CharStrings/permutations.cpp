#include <iostream>
#include <string>
using namespace std;
string reverse(string s){
    int st = 0;
    int e = s.length()-1;
    while(st<=e){
        swap(s[st],s[e]);
        e--;
        st++;
}
return s;
}

bool permutation(string s, string p){
    cout<<s.find(p)<<endl;
    if (s.find(p) != 0 || s.find(reverse(p))){
        return true;
    }
    return false;
}
int main(){
    string s = "shashwat";
    s = reverse(s);
    for (auto i:s){
        cout<<i;
    }
    cout<<endl;
    string part = "sw";
    cout<<permutation(s,part)<<endl;
}