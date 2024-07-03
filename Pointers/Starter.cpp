#include <iostream>
#include <math.h>
using namespace std;
//address is in hexadecimal format
//Pointer is the container for any address
//* is a de-reference operator
//*p is the value to whih the address is pointing.
//Koi bhi case me pointer ka case os 8 bytes becasue the address is the only thing getting stored.
//Jab pointer, not value me kuch add karte ho toh agli location par chala jayega

//arr[i] = *(arr+i)
int main(){
    int num = 5;
    // int *p = &num;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<sizeof(p)<<endl;



    // int a = num;
    // a++;
    // cout<<num<<endl;
    // cout<<a<<endl;



    int *p = &num;
    cout<<"before "<<num << endl;
    (*p)++;
    cout << "after "<< num << endl;


    // important concept
int i = 3;
int *t = &i;
cout <<(*t)++ << endl;
*t = *t +1;
cout << *t << endl;
cout << " before t" << t << endl;
t=t+1;
cout << " after t" << t << endl;






}