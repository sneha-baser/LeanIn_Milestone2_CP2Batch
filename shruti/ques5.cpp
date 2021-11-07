//Create an empty stack.
//One by one dequeue first K items from given queue and push the dequeued items to stack.
//Enqueue the contents of stack at the back of the queue
//Dequeue (n-k) elements from the front and enque them one by one to the same queue.
//t-C - O(n+k)
//space complexity - O(n);



#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void reverseQueue(
    int k, queue<int>& Queue)
{
    if (Queue.empty() == true
        || k > Queue.size())
        return;
    if (k <= 0)
        return;
 
    stack<int> Stack;
 
    
    for (int i = 0; i < k; i++) {
        Stack.push(Queue.front());
        Queue.pop();
    }
 
    
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
 
    
    for (int i = 0; i < Queue.size() - k; i++) {
        Queue.push(Queue.front());
        Queue.pop();
    }
}
 



void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
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
    Queue.push(60);

    int k = 2;
    reverseQueue(k, Queue);
    Print(Queue);
}

