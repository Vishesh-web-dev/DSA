//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
            int freq[26] = {0};
		    queue<char> q;
		    for(int i = 0; i<A.length() ; i++){
		        //cnt freq
		        freq[A[i]-'a']++;
		        //push new eleme
		        q.push(A[i]);
		        //check and update queue front ==> should have non rep elem at fornt
		        while((!q.empty()) && freq[q.front() -'a'] > 1){
		            q.pop();
		        }
		        //update String 
		        if(q.empty()){
		            A[i] = '#';
		        }else{
		            A[i] = q.front();
		        }
		    }
		    return A;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends