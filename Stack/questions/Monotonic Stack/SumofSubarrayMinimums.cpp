const int mod = 1e9+7;
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        //B.F. subarray traversal
        //monotonic stack
        //   a[i]*nextmin[i]+1*prevmin[i]+1 ??
        // a[i]*g1+1 *g2+1 
        //here g1 is element between i to j where j is lesser prev element then element at i
        //similary for g2 it's just next
        int n = arr.size(); 
        vector<long long int> next(n), prev(n);
        for(int i = 0 ;i < n ; i++){
            next[i] = n-i-1;
            prev[i] = i;
        }
        stack<int> s;
        for(int i = 0; i < n ; i++){
            if(s.empty()){
                s.push(i);
                continue;
            }
            while((!s.empty()) && arr[s.top()] >= arr[i]){
                next[s.top()] =  i - s.top() - 1;
                s.pop();
            }
            s.push(i);
        }    
        stack<int> s2;
        for(int i = n-1; i >= 0 ; i--){
            if(s2.empty()){
                s2.push(i);
                continue;
            }
            while((!s2.empty()) && arr[s2.top()] > arr[i]){
                prev[s2.top()] =   s2.top() - i - 1;
                s2.pop();
            }
            s2.push(i);
        }    

        /* this or
        unsigned long long ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans = (ans%mod + ((arr[i]%mod*(next[i]+1)%mod*(prev[i]+1)%mod)%mod)%mod)%mod;
        }
        */
        long long ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans += ((arr[i])*(next[i]+1)*(prev[i]+1));
            ans %= mod;
        }
        return ans;
    }
};