/*Q3.Reverse a Queue*/

#include <bits/stdc++.h>
using namespace std;
 
//function to print the queue
void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
 
//Function to reverse the queue
void revQueue(queue<int>& Queue)
{
    stack<int> Stk;
    while (!Queue.empty()) {
        Stk.push(Queue.front());
        Queue.pop();
    }
    while (!Stk.empty()) {
        Queue.push(Stk.top());
        Stk.pop();
    }
}
 
// Driver code
int main()
{
    queue<int> Queue;
    Queue.push(5);
    Queue.push(10);
    Queue.push(15);
    Queue.push(18);
    Queue.push(20);
    Queue.push(25);
    Queue.push(35);
    Queue.push(40);
    Queue.push(50);
    Queue.push(75);
 
    revQueue(Queue);
    Print(Queue);
}
