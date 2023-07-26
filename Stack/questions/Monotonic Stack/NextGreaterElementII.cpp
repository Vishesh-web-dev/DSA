class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        //search for 2n or 
        // prev greater element if no next greater found
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i = 0 ; i < 2*n; i++){
            while((!st.empty()) && nums[st.top()] < nums[i%n]){
                ans[st.top()] = nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return ans;
    }
};