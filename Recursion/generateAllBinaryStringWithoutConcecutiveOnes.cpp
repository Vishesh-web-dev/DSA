//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(string temp,int i,int n){
        if(i == n ){
            cout<<temp<<" ";
            return;
        }
        //take 0 safely
        temp+="0";
        solve(temp,i+1,n);
        // cout<<temp<<" ";
        temp.pop_back();
        
        //check if we can call for 1 safely and then call for it
        //here do dry run and imagine it correctly
        if((i > 0 && temp[i-1] != '1') || i == 0){
            temp += "1";
            solve(temp,i+1,n);
        }
        return;
    }
    void generateBinaryStrings(int num){
        //Write your code
        int i = 0;
        string temp;
        solve(temp,i,num);
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends