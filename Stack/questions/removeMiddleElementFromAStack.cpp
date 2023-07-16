//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    private:    
    
    void solve(stack<int>&s,int i,int n){
        if(i == (n/2)){
            s.pop();
            return;
        }
        int x = s.top();
        s.pop();
        solve(s,i+1,n);
        s.push(x);
    }
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        // stack<int> half;
        // int k = sizeOfStack/2;
        // for(int i = 0 ; i < k ; i++){
        //     half.push(s.top());
        //     s.pop();
        // }
        // s.pop();
        // for(int i = 0 ; i < k ; i++){
        //     s.push(half.top());
        //     half.pop();
        // }
        // recursive
        int i = 0;
        solve(s,i,sizeOfStack);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends