//Q2.Get min at pop


#include<bits/stdc++.h>
using namespace std;

stack<int> push(int arr[],int n)
{
  stack<int> stk;
  int min = arr[0];
  for(int i=0;i<n;i++)
  {
      if(arr[i]<min)
      {
          min = arr[i];
      }
      stk.push(min);
  }
  return stk;
}

void getMinAtPop(stack<int>s)
{
   while(!s.empty())
   {
       cout<<s.top()<<" ";
       s.pop();
   }
}


int main(){
	int n,arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	stack<int> stk=push(arr,n);
	getMinAtPop(stk);
	cout<<endl;
}
