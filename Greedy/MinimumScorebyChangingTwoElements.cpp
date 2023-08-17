//leetcode
class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        //consider all the possible pairs of max and min 
        //after changing
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans1 = abs(nums[1]-nums[n-2]);//second min and max
        int ans2 = abs(nums[2]-nums[n-1]);//third min and first max
        int ans3 = abs(nums[0]-nums[n-3]); //first min and third max
        int ans = min(ans1,min(ans2,ans3));
        return ans;
    }
};