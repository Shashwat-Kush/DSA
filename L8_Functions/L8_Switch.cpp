#include <iostream>
using namespace std;
#include <math.h>

//instead of if else conditions, we can use switch statements which can give
// us multiple options
// switch (exp){
// case const1: ________ const1 can be integers or characters
    //break;
// case const2: ________
    //break;
// case const3: ________
    //break;
// default: ________
// }

//If you are in while loop and then inside we have a switch loop,
//then to break out from the switch loop, we use break; and to break out from the while loop, we use exit();

//Switch me continue nahi chalta;

int main(){
    // int num =2;
    // cout<<endl;
    // switch(num){
    //     case 1: cout<<"First"<<endl;
    //     break;
    //     case 3: cout<<"Second"<<endl;
    //     break;
    //     default : cout<<"Default"<<endl;
    //     break;
    // }

    
    //Homework
    int hundred = 0;
    int fifty = 0;
    int twenty = 0;
    int ones = 0;
    int n;
    cout<<"Enter the amount : ";
    cin>>n;
    
    while(n>=100){
        n = n-100;
        hundred++;
    }
    while(n>=50){
        n = n-50;
        fifty++;
    }
    while(n>=20){
        n = n-20;
        twenty++;
    }
    while(n>=1){
        n = n-1;
        ones++;
    }
    cout<<"100 : "<<hundred<<endl;
    cout<<"50 : "<<fifty<<endl;
    cout<<"20 : "<<twenty<<endl;
    cout<<"1 : "<<ones<<endl;


}