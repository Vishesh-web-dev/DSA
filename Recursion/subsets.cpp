class Solution {
public:
        void solve(vector<vector<int>>&ans, vector<int> nums,vector<int> output,int i){
            if(i == nums.size()){
                ans.push_back(output);
                return;
            }
            //exclude
            solve(ans,nums,output,i+1);
            //include
            output.push_back(nums[i]);
            solve(ans,nums,output,i+1);
        }
       vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int>> ans;
        // vector<int> rows;
        // ans.push_back(rows);
        // rows.push_back(nums[0]);
        // ans.push_back(rows);
        // rows.clear();
        // for(int i = 1 ; i < nums.size() ; i++){
        //     int size = ans.size();
        //     for(int j = 0;j<size;j++){
        //         //select first row and add 2
        //         //then this row to ans again
        //         rows = ans[j];
        //         rows.push_back(nums[i]);
        //         ans.push_back(rows);
        //     }
        // }
        // return ans;

        //recursive aproach 
        vector<vector<int>> ans;
        vector<int> output;
        solve(ans,nums,output,0);
        return ans;
    }
};