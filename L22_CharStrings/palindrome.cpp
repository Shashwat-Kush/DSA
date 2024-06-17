#include <iostream>
#include <vector>
using namespace std;
//Two pointer approach
int len(char v[]){
    int count = 0;
    int i=0;
    while(v[i] !='\0'){
        count++;
        i++;
    }
    return count;
}

//Case sensitive
bool palindrome(char v[]){
    int start =0;
    int end = len(v) -1;
    while(start<=end){
        if (v[start]==v[end]){
            start++;
            end--;
        }
        else {
            return false;
        }
    }
    return true;
}

//Not Case sensitive
char toLower(char v){
    if(v>='a' && v<= 'z'){
        return v;
    }
    else{
        v = v-'A'+'a';
        return v;
    }
}

//Not case sensitive verification
bool palindrome2(char v[]){
    int start =0;
    int end = len(v) -1;
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
int main(){
    char name[20];
    cin>>name;
    cout<<"Is the string a palindrome? "<<palindrome2(name)<<endl;
}