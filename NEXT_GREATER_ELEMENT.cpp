/*using stack*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void printNGE(int arr[], int n)
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
    while (s.empty() == false) {
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
    }
}
int main()
{   int n;  
    cout<<"Enter n";
    cin>>n;
    cout<<"Enter n Elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int arr[n];
    printNGE(arr, n);
    return 0;
}
