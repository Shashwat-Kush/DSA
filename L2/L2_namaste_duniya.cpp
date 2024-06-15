#include <iostream>
//many namespaces are there
using namespace std;
//start of the program
int main(){
    cout<<"Namaste Duniya"<<endl; //new line character
    cout<<"Namaste Duniya"<<'\n';
    cout<<"Namaste Duniya";
    cout<<"Namaste Duniya \n";

    int a =5;
    cout<<"The value of a is "<<a<<endl;
    int size = sizeof(a);
    cout<<"The size of int is "<<size<<endl;
    int b= 'a';
    cout<<"The value of b is "<<b<<endl;
    char c = 98;
    cout<<"The value of c is "<<c<<endl;
    //agar main badin value daalne ki koshish karu chote me daalne ki toh last ki kuch bits daal dega chote wale me and uska charater dikha dega
    int d = 1234;
    cout<<"The value of d is "<<d<<endl;
    //what will happen here is that e will convert the number to binary and because the number is negative, it will have the first digit as 1. Now when compiling and running the code, it will see that the number is positive because of the unsigned use, then it will create a very big number then.
    unsigned int e = -1234;
    cout<<"The value of e is "<<e<<endl;
}

//char a = 'A'; it is of 1 byte length ; 8 bits; space saving ; the character value is mapped to a ascii table and that number is converted to binary and given on a 8 bit place or 1 byte place
//bool is of 1 bit length and on printing gives the integer value of 1 or 0
//int is of 4 bytes length; 32 bits
//float is of 8 bytes length;
//double is of 8 bytes length;

//typecasting is the method of converting one data type to another data type

//if the first bit is 0, then it is a positive number and vice versa.
//To convert it, what to do is ignore the negative sign and take 2's compliment which is add 1 to 1's compliment which is inverting the bits
//why we try to have 2's compliment is because to save the representation of 0 that used to occur 2 times if the simple 0 and 1 funda is used every time and in this method we can have a unique representation of 0 rather than having 2 reps of 0.
