#include <iostream>
#include <queue>
using namespace std;
//Queue is FIFO
//We can only insert the elements from the back of the queue
//We can only delete the elements from the front of the queue
//We can't insert and delete the elements from the middle of the queue
//We can't access the elements of the queue directly
//We can only access the elements by using the iterators

int main(){
    queue<string> q;
    q.push("Apple");
    q.push("Mango");
    q.push("Guava");
    cout<<"Front element is "<<q.front()<<endl;
    cout<<"Back element is "<<q.back()<<endl;
    cout<<"Size of the queue is "<<q.size()<<endl;
    q.pop();
    cout<<"Front element is "<<q.front()<<endl;
    cout<<"Size of the queue is "<<q.size()<<endl;
}