#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string res = "";
    for (int i=0;i<s.length();i++){
        if (s[i] != ' '){
            res.push_back(s[i]);
        }
        else{
            res.push_back('@');
            res.push_back('4');
            res.push_back('0');
        }
    }
    for (int i=0;i<res.length();i++){
        cout<<res[i];
    }
    cout<<endl;
}