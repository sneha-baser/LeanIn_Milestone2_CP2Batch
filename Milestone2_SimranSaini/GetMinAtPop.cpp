#include <iostream>
#include <stack>
using namespace std;
 
class Stack
{
    // main stack to store elements
    stack<int> s;
 
    // variable to store the minimum element
    int min;
 
public:
 
    // Inserts a given element on top of the stack
    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
            min = x;
        }
        else if (x > min) {
            s.push(x);
        }
        else {
            s.push(2*x - min);
            min = x;
        }
    }
 
    // Removes the top element from the stack and returns it
    void pop()
    {
        if (s.empty()) {
            cout << "Stack underflow!!" << endl;
        }
 
        int top = s.top();
        if (top < min) {
            min = 2*min - top;
        }
        s.pop();
    }
 
    // Returns the minimum element from the stack in constant time
    int minimum() {
        return min;
    }
};
 
int main()
{
    Stack s;
 
    s.push(1);
    cout << s.minimum() << endl;
 
    s.push(2);
    cout << s.minimum() << endl;
 
    s.push(3);
    cout << s.minimum() << endl;
 
    s.push(4);
    cout << s.minimum() << endl;
 
    s.pop();
    cout << s.minimum() << endl;
 
    s.pop();
    cout << s.minimum() << endl;
 
    return 0;
}

/*OUTPUT
1
1
1
1
1
1*/
