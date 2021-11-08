//Q1.Next Greater Element 

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    for (int i = 1; i < n; i++) 
    {

        if (s.empty()) {
            s.push(arr[i]);
            continue;
        }
        while (s.empty() == false 
               && s.top() < arr[i]) 
        {
            cout << s.top() 
                 << " --> " << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }

     //print -1, if there is no next greater element for remaining element of the stack
    while (s.empty() == false) {
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
    }
}

int main()
{
    int arr[] = { 3,4,9,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    return 0;
}
    
