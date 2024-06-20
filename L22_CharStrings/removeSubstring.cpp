#include <iostream>
#include <string>
using namespace std;


int main(){
    string s ="daabbaabcbc";
    string part = "abc";
    while(s.length() !=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    for (int i=0;i<s.length();i++){
        cout<<s[i];
    }
    cout<<endl;
}