#include <iostream>
#include <math.h>
using namespace std;
//The range in which the answer is lying is called the search space

//Problem 69
int sqrtInt(int num){
    int start=0;
    long long int end = num;
    long long int mid = start + (end-start)/2;
    while(start< mid){
        if(mid*mid <=num){
            start=mid;
        }
        else if(mid*mid >num){
            end=mid;
        }
        
        mid = start + (end-start)/2;
    }
    return start;
}
double precise(int temp, int precision, int num){
    double factor =1;
    double ans = temp;
    for (int i=0; i<precision; i++){
        factor = factor/10;
        for(double j=ans;j*j <num;j = j+factor){
            ans = j;
        }
        
    }
    return ans;
}
int main(){
    int num ;
    cout<<"Enter the number = ";
    cin>>num;
    cout<<sqrtInt(num)<<endl;
    cout<<"Precise Square root of "<<num<<" is "<<precise(sqrtInt(num),7,num)<<endl;

}