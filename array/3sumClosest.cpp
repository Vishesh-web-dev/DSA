//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int a[], int n, int x)
    {
        // code here 
        sort(a,a+n);
        int ans;
        int sum;
        int Mindiff = INT_MAX;
        for(int i = 0 ; i < n-2; i++){
            int s = i+1,e = n-1;
            while(s<e){
                sum = a[s] + a[e] + a[i];
                // cout<<abs(sum-x)<<" ";
                int diff = abs(sum - x);
                if(diff < Mindiff){
                    ans = sum;
                    Mindiff = diff;
                }
                
                if(sum > x){
                    e--;
                }else{
                    s++;
                }
            }
        }
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
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends