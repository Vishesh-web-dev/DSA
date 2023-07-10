//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{   
    private:
    void solve(vector<string>& ans,string temp, int n , int i , int cnt1,int cnt2){
        if(i == 2*n){
            ans.push_back(temp);
            return;
        }
        //for '('
        if(i != (2*n)-1 && cnt1 < n){
            // if(cnt1 == n && )
            temp.push_back('(');
            cnt1++;
            solve(ans,temp,n,i+1,cnt1,cnt2);
            //backtrack also
            temp.pop_back();
            cnt1--;
        }
        
        //for ')'
        if(i !=0 && cnt2 < n && cnt2 < cnt1){
            temp.push_back(')');
            cnt2++;
            solve(ans,temp,n,i+1,cnt1,cnt2);
        }
    }
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
        vector<string> ans;
        string temp;
        int i = 0,cnt1 = 0,cnt2 = 0;
        solve(ans,temp,n,i,cnt1,cnt2);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends