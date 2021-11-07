
//in this question, I have used vector. if the stack is emty, I pushed -1 into the vector.
// if the top element of the stack is greater than the ith element of an array, then I returned the top element of the stack.
// if the top element is smaller or equal to the ith element of array, pop the elememts from the stack until the stack didn't get emty.
// time complexity - O(N)
// space complexity - O(N)


#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;


int nextelement(int arr[],int n)
{
    stack<int>str;
    vector<int>v;
    
    for(int i=n-1;i>=0;i--)
    {
        if(str.size()==0)
        v.push_back(-1);
        
        else if(str.size()>0 && str.top()>arr[i])
        v.push_back(str.top());
        
        else if(str.size()>0 && str.top()<=arr[i])
        {
            while(str.size()>0 && str.top()<=arr[i])
            {
            str.pop();
            }
            
            if(str.size()==0)
            v.push_back(-1);
            
            else
            v.push_back(str.top());
        }
        
        str.push(arr[i]);
    }
    
    
    reverse(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++)
    {
        cout<<""<<v[i]<<endl;
    }
    
    
    
    
}





int main()
{
    int arr[]={1,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    nextelement(arr,n);
    
}