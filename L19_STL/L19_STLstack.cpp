#include <iostream>
#include <stack>
using namespace std;
//Stack is LIFO
//We can only insert and delete the elements from the top of the stack
//We can't insert and delete the elements from the middle of the stack
//We can't access the elements of the stack directly

int main(){
    stack<string> s;
    s.push("Apple");
    s.push("Mango");
    s.push("Guava");
    cout<<"Top element is "<<s.top()<<endl;
    s.pop();
    cout<<"Top element is "<<s.top()<<endl;
    cout<<"Size of the stack is "<<s.size()<<endl;
    cout<<"Is the stack empty? "<<s.empty()<<endl;
    
}