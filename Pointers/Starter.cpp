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
//i[arr] = *(i+arr)

//int a =5;
//int *ptr = &a;
//int **ptr1 = &ptr; This is double pointer



//there is a concept of reference variable that is actually not allocating a new memory but just referring to the same memory space as initialised for the intial variable;


//for the heap access, we are using "new" keyword
//int * arr = new int[5]
//here the left side has be allocated the address storage of 8 bytes in the stack part and the right side allocates the array size gor 5 elements in the heap...so the total memory stored in this line is 28 bytes
//we can use this for dynamic array in heap

//static allocation me apne aap memory is released
//dynamic memory me memory should be removed with "delete variable or []arr"

//int **arr = new int *[n] : this is the 2D array for dynamic allocation


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

/*

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


*/

    int n;
    cin>>n;
    //its row vs col
    int **arr = new int*[n];
    for (int i=0;i<n;i++){
        arr[i] = new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;


    for (int i=0;i<n;i++){
        delete [] arr[i];
    }

    delete arr[i];
    }
}