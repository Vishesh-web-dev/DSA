class Solution {
public:
    void swap(int &a,int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void solve(vector<vector<int>>& ans,vector<int> nums,int i){
        if(i == nums.size() - 1){
            ans.push_back(nums);
            return;
        }
        for(int j = i; j < nums.size() ; j++){
            if(j!=i && nums[i] == nums[j]){
                continue;
            }
            swap(nums[i],nums[j]);
            solve(ans,nums,i+1);
            // swap(nums[i],nums[j]); //no backtracking cause it creates 
            //duplicates by putting redundent value at i position
            //if we dont backtrack then the repeated value won't get to ith position
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        solve(ans,nums,0);
        return ans;
    }
};