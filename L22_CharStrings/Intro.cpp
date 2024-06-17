#include <iostream>
#include <math.h>
using namespace std;
//strings are 1 dimentional character arrays in total;
//jahan par string khatam...uske agle block me null charachter aata hain
int main(){

    char name[10];
    cin>>name;
    
    name[3] = '\0';
    cout<<" Hello, "<<name <<" "<<name[6]<<endl;
    for (int i=0;i<10;i++){
        cout<<name[i]<<" ";
    }

    cout<<endl;
    cout<<name[8];
    cout<<name[9];
}