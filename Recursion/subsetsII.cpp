class Solution {
public:
    void solve(vector<vector<int>>& ans,vector<int> temp,vector<int> nums,int i){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }

        //exclude
        solve(ans,temp,nums,i+1);

        //include
        temp.push_back(nums[i]);
        solve(ans,temp,nums,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int i = 0;
        solve(ans,temp,nums,i);
        //using map remove copies
        vector<vector<int>> originalAns;
        // sort kro aur i+1 ka vector i ke equal ho toh include mt kro else kr lo
        for(int i = 0; i < ans.size();i++){
            sort(ans[i].begin(),ans[i].end());
        }
        //remove duplicates
        sort(ans.begin(),ans.end());
        originalAns.push_back(ans[0]);

        for(int i = 1 ; i < ans.size() ; i++){
            if(ans[i] != ans[i-1]){
                originalAns.push_back(ans[i]);
            }
        }
        return originalAns;
    }
};