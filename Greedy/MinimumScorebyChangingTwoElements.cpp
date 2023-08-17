class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        //consider all the possible pairs of max and min 
        //after changing
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int poss1 = abs(nums[1]-nums[n-2]);//second min and max
        int poss2 = abs(nums[2]-nums[n-1]);//third min and first max
        int poss3 = abs(nums[0]-nums[n-3]); //first min and third max
        return min({poss1,poss2,poss3});
    }
};