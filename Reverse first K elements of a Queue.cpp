//Q5.Reverse first k elements of a queue. 

#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to reverse the first K elements of the Queue */
void reverseQueueFirstKElements(int k, queue<int>& Queue) 
{ 
    if (Queue.empty() == true || k > Queue.size()) 
        return; 
    if (k <= 0) 
        return; 
  
    stack<int> Stack; 
  
    /* Push the first K elements into a Stack*/
    for (int i = 0; i < k; i++) { 
        Stack.push(Queue.front()); 
        Queue.pop(); 
    } 
  
    /* Enqueue the contents of stack 
       at the back of the queue*/
    while (!Stack.empty()) { 
        Queue.push(Stack.top()); 
        Stack.pop(); 
    } 
  
    /* Remove the remaining elements and  
       enqueue them at the end of the Queue*/
    for (int i = 0; i < Queue.size() - k; i++) { 
        Queue.push(Queue.front()); 
        Queue.pop(); 
    } 
} 
  
/* Utility Function to print the Queue */
void Print(queue<int>& Queue) 
{ 
    while (!Queue.empty()) { 
        cout << Queue.front() << " "; 
        Queue.pop(); 
    } 
} 
  
// Driver code 
int main() 
{ 
    queue<int> Queue; 
    Queue.push(5); 
    Queue.push(10); 
    Queue.push(30); 
    Queue.push(34); 
    Queue.push(50); 
    Queue.push(54); 
    Queue.push(70); 
    Queue.push(75); 
    Queue.push(90); 
    Queue.push(95); 
  
    int k = 5; 
    reverseQueueFirstKElements(k, Queue); 
    Print(Queue); 
} 
