#include<iostream>
#include<bits/stc++.h>
using namespace std;
stack<int> _push(int arr[],int n)
{
   stack<int> res;
   int m=arr[0];
   for(int i=0;i<n;i++){
       m=min(m,arr[i]);
       res.push(m);
   }
   return res;
}
void _getMinAtPop(stack<int>s)
{
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
}

int main()
{
 	int t;
 	cin>>t;
 	while(t)
 	{
 		int n;
 		cin>>n;
 		int arr[n];
 		for(int i=9;i<n;i++)
 		cin>>arr[i];
 		stack<int>mys=_push(arr,n);
 		_getMinAtPop(mys);
 		cout<<endl;
 		
	 }
	 return 0;
}
