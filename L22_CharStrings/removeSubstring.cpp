#include <iostream>
#include <math.h>
using namespace std;

bool findSubstring(string s, string part){
    int n = part.length();
    for (int i=0;i<s.length()-n;i++){
        string a = "";
        for(int j=i;j<i+n;j++){
            a.push_back(s[j]);
        }
        if (strcmp(a,part)==0){
            return true;
        }
    }
    return false;
}
void removesubstring(string s, string part){
    if (findSubstring(s,part)){
        
    }
}
int main(){
    string s ="daabbaabcbc";
    string part = "abc";
    // remSubstring(s,part);
    cout<<part[0]<<s[2];
}