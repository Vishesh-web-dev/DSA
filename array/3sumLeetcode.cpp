class Solution {
public:
//here values are not distinct
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < n-2 ; i++){
            int s = i+1,e = n-1;
            //to remove repetitive pairs of i
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            sum = 0 - nums[i];
            while(s<e){
                if(nums[s] + nums[e] == sum){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[s]);
                    temp.push_back(nums[e]);
                    ans.push_back(temp);
                    s++;
                    e--;
                    temp.clear();
                    while(s<e &&nums[s] == nums[s-1]){
                        s++;
                    }
                    while(s<e && nums[e] == nums[e+1]){
                        e--;
                    }
                }else if(nums[s] + nums[e] > sum){
                    e--;
                }else{
                    s++;
                }

                //same s and e aage badh jao
                
            }
        }
        return ans;
    }
};