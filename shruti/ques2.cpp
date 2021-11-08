
// I stored the 0th element in the min and then traverse the array if the min element is greater than the ith element 
// then min= arr[i] and pushed the min element in the stack.
// while stack didn't get emty, pop out the elements from stack.

// Time comp- O(n);
// space - O(n);


#include<iostream>
#include<stack>
using namespace std;

stack<int> _push(int arr[],int n)
{
   
   stack<int> st;
   int min=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]<min){
           min=arr[i];
       }
       st.push(min);
   }
   return st;
}

void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    stack<int>mys=push(arr,n);
    _getMinAtPop(mys);

    cout<<endl;

    return 0;


}