#include <iostream>
#include <queue>
using namespace std;
//Priority Queue is a type of queue in which every element has a priority and the element with the highest priority is served first.
//jab nikalna shuru karoge toh ya toh max element niklega ya min element niklega
//By default, the priority queue is a max heap

int main(){
    //max_heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(15);
    pq.push(20);
    cout<<"Top element is "<<pq.top()<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    //min_heap
    priority_queue<int, vector<int>, greater<int> > pq1;
    pq1.push(5);
    pq1.push(10);
    pq1.push(15);
    pq1.push(20);
    cout<<"Top element is "<<pq1.top()<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
}