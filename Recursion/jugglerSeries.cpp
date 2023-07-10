//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    void solve( vector<int>& ans, int n){
        ans.push_back(n);
        if(n == 1)return;
        
        if(n&1){
            n = n*sqrt(n);
        }else{
            n = sqrt(n);
        }
        solve(ans,n);   
    }
    vector<int> jugglerSequence(int N){
        // code here
        vector<int> ans;
        solve(ans,N);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends