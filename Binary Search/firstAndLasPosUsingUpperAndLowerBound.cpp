class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1 = lower_bound(nums.begin(),nums.end(),target);
        int fpos = it1-nums.begin();
        if(fpos >= nums.size() || nums[fpos] != target){
            fpos = -1;
        }

        auto it2 = upper_bound(nums.begin(),nums.end(),target);
        int lpos = (it2-nums.begin())-1;
        if(lpos >= nums.size() || nums[lpos] != target){
            lpos = -1;
        }

        vector<int> ans(2);
        ans[0] = (fpos);
        ans[1] = (lpos);
        return ans;
    }
};