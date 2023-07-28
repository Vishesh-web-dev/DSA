//leetcode
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sumEven = 0;
        for(int i : nums){
            if(i%2 == 0){
                sumEven += i;
            }
        }
        cout<<sumEven<<" \n";
        vector<int> ans;
        for(int i = 0 ; i < queries.size() ; i++){
            int idx = queries[i][1];
            int val = queries[i][0];
            //odd + even = odd
            if(nums[idx]%2 != 0 && val%2 == 0){
                nums[idx] += val;
            }
            //both are odd = even add to sumEven
            else if(nums[idx]%2 != 0 && val%2 != 0){
                cout<<idx<<" \n";
                nums[idx]+=val; //even
                sumEven+=nums[idx];
            }
            //even + odd = odd
            else if(nums[idx]%2 == 0 && val%2 != 0){
                sumEven-=nums[idx];
                nums[idx]+=val;
            }
            //even + even  = even 
            else{
               sumEven+=val;
               nums[idx]+=val; 
            }
            ans.push_back(sumEven);   
        }
        return ans;
    }
};