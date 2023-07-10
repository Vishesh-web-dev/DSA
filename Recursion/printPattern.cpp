//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(vector<int>& ans,int n,int realN,int flag){
        if(realN == n && flag == 1){
			ans.push_back(n);
			return;
		}
        ans.push_back(n);
        if(n > 0 && flag == 0){
            solve(ans,n-5,realN,flag);
        }else{
			flag = 1; //only hit this codition now bro
            solve(ans,n+5,realN,flag);
        }
    }
    vector<int> pattern(int N){
        // code here
        vector<int> ans;
        int realN = N;
		int flag = 0;
        solve(ans,N,N,flag);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";

    return 0;
}
// } Driver Code Ends