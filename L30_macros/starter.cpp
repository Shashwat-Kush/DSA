#include <iostream>
#include <math.h>
using namespace std;
//this #include is preprocessor directive that includes the coed that is there in the ile to be copied before compiling for the programs of that file to be used
// #define variable value ; creates a macro which is a piece of program that is replaced by the macro

//compile hone se pehle macro text par ye value aa jayegi...so variable nahi create hua...bs value replace kar di usne

//Inline function are a way to reduce function calls overhead
//Ther are like macro only...like if we have a single line function then before compiling, we can replace the function call by the one-liner function and then we dont have to call for a function and the extra space that is made after every function call

#define PI 3.141
int main(){
    int r = 5;
    cout<<PI*r*r<<endl;
}