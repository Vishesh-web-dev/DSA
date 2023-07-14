class Solution {
public:
    void solve(vector<vector<int>>& ans,vector<int> temp,vector<int> nums,int i){
        if(i == nums.size()){
            return;
        }   

        for(int j = i ; j < nums.size() ; j++){
            if(i!=j && nums[j]==nums[j-1])continue;
            temp.push_back(nums[j]);
            ans.push_back(temp);
            solve(ans,temp,nums,j+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //see prev submission now i have modified it
        vector<vector<int>> ans;
        vector<int> temp;
        ans.push_back(temp);
        sort(nums.begin(),nums.end());
        solve(ans,temp,nums,0);
        
        return ans;
    }
};