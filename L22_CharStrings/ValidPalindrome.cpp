#include <iostream>
#include <math.h>
using namespace std;
//Difference in character arrray and string is 
//char is fixed size, static, have a null-terminated character and are efficient in size and memory
//string is dynamic in nature, no null terminated character present, more convinient to use but not efficient compared to character array;

bool isValid(char ch){
    if ((ch>='a' && ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return true;
    }
    return false;
}
char toLower(char v){
    if(v>='a' && v<= 'z'){
        return v;
    }
    else{
        v = v-'A'+'a';
        return v;
    }
}
bool palindrome(string v){
    int start =0;
    int end = v.length() -1;
    while(start<=end){
        if (toLower(v[start])==toLower(v[end])){
            start++;
            end--;
        }
        else {
            return false;
        }
    }
    return true;
}

bool isValidPalindrome(string str){
    string s = "";
    //remove unnecessary characters
    for (int i=0;i<str.length();i++){
        if(isValid(str[i])){
            s.push_back(str[i]);
        }
    }
    //Lowercase and check ek saath
    return palindrome(s);
    
}

//"A man, a plan, a canal: Panama"
int main(){
    string str;
    cin>>str;
    cout<<isValidPalindrome(str)<<endl;
}