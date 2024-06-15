#include <iostream>
#include <list>
using namespace std;
//It is a doubly linked list
//It is a sequence container
//We cant directly access the elements of the list
//We can only access the elements by using the iterators
//We can insert and delete the elements from the list
//We can insert and delete the elements from the middle of the list.

int main(){
    list<int> l;

    list<int> n(5,100);

    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    for (int i : l){
        cout << i << " ";
    }
    cout<<endl;
    l.erase (l. begin());
    cout<<"after erase"<<endl;
    for(int i:l) {
    cout<<i<<" ";


    cout<<"size of the list is "<<l.size()<<endl;
}
}