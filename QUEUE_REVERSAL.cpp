/* we will dequeue all the elements of the queue and push them into the stack, and once the queue is empty,
 we will pop elements from the stack and insert them in the queue.*/
#include<iostream>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q)
{
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}

void printQueue(queue<int> q)
{

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int> q;
    for(int i=1;i<=10;i++)
    {
        q.push(i);
    }
    cout<<"Queue before Reversing: ";
    printQueue(q);
    
    reverse(q);

    cout<<"Queue after Reversing: ";
    printQueue(q);
}
