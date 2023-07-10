//leetcode Problem

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        //find difference between two element which is minium
        //sort and check differnce between concecutive elements
        //and store minimum out of it
        sort(nums.begin(),nums.end());
        int minDiff = INT_MAX;
        int currDiff;
        for(int i = 0 ; i < nums.size() - 1; i++){
            currDiff = nums[i+1] - nums[i];
            if(currDiff < minDiff){
                minDiff = currDiff;
            }
        }
        return minDiff;
    }
};