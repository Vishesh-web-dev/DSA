class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        // iterate subarray 
        // update max min for each iteration in subarray
        //O(n^2)
        // int n = nums.size();
        // long long int sum = 0;
        // for(int i = 0 ; i < n ; i++){
        //     int mini = nums[i],maxi = nums[i];
        //     for(int j = i ; j < n ; j++){
        //         //update min,max
        //         mini = min(nums[j],mini);
        //         maxi = max(nums[j],maxi);
        //         //update sum
        //         sum += (maxi-mini);
        //     }
        // }   
        // return sum;

        //O(n) monotonic stack
        int n = nums.size();
        vector<long long int> nextmax(n),prevmax(n),nextmin(n),prevmin(n);
        for(int i = 0 ; i < n ; i++){
            nextmax[i] = nextmin[i] = n-i-1;
            prevmax[i] = prevmin[i] = i;
        }
        stack<int> s1,s2,s3,s4;
        for(int i = 0 ; i < n ; i++){
            while((!s1.empty()) && nums[s1.top()] >= nums[i]){
                nextmin[s1.top()] = i - s1.top() - 1;
                s1.pop();
            }
            s1.push(i);
            while((!s2.empty()) && nums[s2.top()] <= nums[i]){
                nextmax[s2.top()] = i - s2.top() - 1;
                s2.pop();
            }
            s2.push(i);
        }
        for(int i = n-1 ; i >= 0 ; i--){
            while((!s3.empty()) && nums[s3.top()] > nums[i]){
                prevmin[s3.top()] = s3.top() - i - 1;
                s3.pop();
            }
            s3.push(i);
            while((!s4.empty()) && nums[s4.top()] < nums[i]){
                prevmax[s4.top()] = s4.top() - i - 1;
                s4.pop();
            }
            s4.push(i);
        }
        long long int ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans += ((nums[i]*(nextmax[i]+1)*(prevmax[i]+1)) - (nums[i]*(nextmin[i]+1)*(prevmin[i]+1)));
        }
        return ans;
    }
};