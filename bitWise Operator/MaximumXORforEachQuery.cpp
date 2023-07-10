class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        //preSum of Xor
        for(int i = 1 ; i < nums.size() ; i++){
            nums[i] ^= nums[i-1];
        }
        int maximum = (1<<maximumBit) - 1;
        for(int i = nums.size() -1; i >= 0 ; i--){
            //maximum xor is always 
            //2^max - 1
            //so to find maxXor we just need to xor our
            //curr pre(nums[i]) with 2^k-1
            int x = maximum^nums[i];
            ans.push_back(x);
        }
        return ans;
    }
};