//{ Driver Code Starts
// Initial template for C++
//Mine Solution
//yahe pr jaha se aa rhe hai usko visited kr rhe hai and jaha ja rhe hai vo check kr rhe hai
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(vector<string>& ans,vector<vector<int>> table,string temp,vector<vector<int>> m,int n,int i,int j){
        if(i == n-1 && j == n-1){
            ans.push_back(temp);
            return;
        }
        
        //Up
        if(i > 0 && m[i-1][j] == 1 && (table[i-1][j] == 0)){
            temp+="U";
            //update table
            table[i][j] = 1;
            solve(ans,table,temp,m,n,i-1,j);
            temp.pop_back();
            table[i][j] = 0;
        }
        
        //down
        if(i < n-1 && m[i+1][j] == 1 && (table[i+1][j] == 0)){
            temp+="D";
            table[i][j] = 1;
            solve(ans,table,temp,m,n,i+1,j);
            temp.pop_back();
            table[i][j] = 0;
        }
        
        //Right
        if(j < n-1 && m[i][j+1] == 1 && (table[i][j+1] == 0)){
            temp+="R";
            table[i][j] = 1;
            solve(ans,table,temp,m,n,i,j+1);
            temp.pop_back();
            table[i][j] = 0;
        }
        
        //Left
        if(j > 0 && m[i][j-1] == 1 && (table[i][j-1] == 0)){
            temp+="L";
            table[i][j] = 1;
            solve(ans,table,temp,m,n,i,j-1);
            temp.pop_back();
            table[i][j] = 0;
        }
        
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>> table(n,vector<int>(n,0));
        vector<string> ans;
        if(m[0][0] == 0){
            return ans;   
        } //if initial position is 0
        string temp;
        int i = 0,j = 0;
        solve(ans,table,temp,m,n,i,j);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends