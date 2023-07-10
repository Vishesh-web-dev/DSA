//O(n+m) and O(n+m)
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        vector<int> ans;
        unordered_map<int,bool> mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[arr1[i]] = true;
        }
        for(int i = 0 ; i < m ; i++){
            mpp[arr2[i]] = true;
        }
        int s1 = 0, s2 = 0;
        while(s1 < n && s2 < m){
            if(arr1[s1] > arr2[s2]){
                if(mpp[arr2[s2]] == true){
                    ans.push_back(arr2[s2]);
                    mpp[arr2[s2]] = false;
                }
                s2++;
            }else{
                if(mpp[arr1[s1]] == true){
                    ans.push_back(arr1[s1]);
                    mpp[arr1[s1]] = false;
                }
                s1++;
            }
        }
        while(s1<n){
            if(mpp[arr1[s1]] == true){
                ans.push_back(arr1[s1]);
                mpp[arr1[s1]] = false;
            }
            s1++;
        }
        while(s2<m){
            if(mpp[arr2[s2]] == true){
                ans.push_back(arr2[s2]);
                mpp[arr2[s2]] = false;
            }
            s2++;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends