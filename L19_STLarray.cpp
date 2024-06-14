#include <iostream>
#include <array>
using namespace std;
//STL contains algorithms and containers
//Containers are pre-built data structures

int main(){
    int basic[3] = {1,2,3};

    //stl array is same as normal array implementation.
    array<int,3> a = {1,2,3};

    int size = a.size();
        for(int i=0;i<size;i++){
        cout<<a [i]<<endl;
    }

    cout<<"Element at 2nd Index-> "<<a.at (2) <<endl;
    cout<<"Empty or not-> "<<a. empty()<<endl;
    cout<<"First Element-> "<<a.front()<<endl;
    cout<<"Last Element-> "<<a.back()<<endl;
    cout<<"Max Size-> "<<a.max_size()<<endl;
    
}