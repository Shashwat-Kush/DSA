#include <iostream>
#include <vector>
using namespace std;
//dynamic error which will create a vector that will be of double size of the array and all the previous array elements will be copied to the new array.
//vector is a dynamic array

int main(){
    vector<int> v;
    vector<int> a(5,1); //5 elements with value 1
    vector<int> b(5); //5 elements with value 0
    for (int i:a){
        cout<<a[i]<<" ";}
    cout<<endl;
    vector<int> last(a);
    for (int i:last){
        cout<<last[i]<<" ";}
    cout<<endl;
    cout<<"Size: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Elemetn at 2nd Index" <<v.at (2) <<endl;
    cout<<"front " <<v.front()<<endl;
    cout<<"back " <<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v) {
    cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v) {
    cout<<i<<" ";
    }cout<<endl;
    //v.clear() will clear the vector
    //capacity remains the same
    cout<<"before clear size "<<v. size() <<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
}
