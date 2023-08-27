class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0 , n = nums.size() , maxSize = INT_MIN;
        while(j < n && i < n){
            if(k>0){
                if(nums[j] == 0){
                    k--;
                    j++;
                }
                while(j<n && nums[j] == 1){
                    j++;
                }
            }else{
                if(nums[i] == 0){
                    k++;
                }
                i++;
            }
            maxSize = max(maxSize,j-i);
        }
        if(k == 0 && j < i){
            return i;
        }
        return maxSize;
    }
};