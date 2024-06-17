#include <iostream>
#include <math.h>
using namespace std;

int main(){
    char name[30];
    cin>>name;
    int count=0;
    int i=0;
    while(name[i] !='\0'){
        // cout<<name[i];
        count++;
        i++;
    }
    cout<<"Length of the string is: "<<count<<endl;
}