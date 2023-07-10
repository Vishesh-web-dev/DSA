//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        //Your Code Here
        // B.F.
        // for(int i = 0 ; i < n-2 ; i++){
            
        //     if(A[i] >= X) 
        //         continue;
            
        //     for(int j = i+1 ; j < n-1;j++){
        //         if(A[i] + A[j] >= X) 
        //             continue;
                    
        //         for(int k = j+1; k < n;k++){
        //             if(X == A[i] + A[j] + A[k]){
        //                 return 1;
        //             }
        //         }
        //     }
        // }
        
        //optimize
        if(n < 3)return 0;
        sort(a,a  + n);
        for(int i = 0 ; i < n-2; i++){
            int s = i+1,e = n-1;
            int sum = X-a[i];
            while(s<e){
                if(a[s] + a[e]  > sum){
                    e--;
                }else if(a[s] + a[e] < sum){
                    s++;
                }else{
                    return true;
                }
            }
        }
        return false;
        
        return 0;
        
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends