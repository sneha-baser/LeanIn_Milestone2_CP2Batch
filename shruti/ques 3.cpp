//Pop the elements from the queue and insert into the stack.
//Pop the elements of the stack to insert back into the queue. 
//time comp- O(n);
// sc- O(n);



#include<iostream>
#include<stack>
#include<queue>
using namespace std;



void Print(queue <int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}



void reverseQueue(queue<int>& Queue)
{
    stack<int> Stack;
    while (!Queue.empty()) {
        Stack.push(Queue.front());
        Queue.pop();
    }
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
}
 


int main()
{
    queue<int> Queue;
    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    Queue.push(50);
    reverseQueue(Queue);
    Print(Queue);

}