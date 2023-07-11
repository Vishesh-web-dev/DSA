class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size() == 0 || nums.size() == 1)return nums.size();
       //B.F. Sort and Check
       sort(nums.begin(),nums.end());
       int cnt = 1;
       int currmax = 1;
       for(int i = 0 ; i < nums.size() - 1 ;i++){
           if(nums[i] == nums[i+1])continue;
           if(nums[i]+1 == nums[i+1]){
               cnt++;
           }else{
               currmax = max(currmax,cnt);
               cnt = 1;
           }
       }
       currmax = max(currmax,cnt);
       return currmax;   
    }
};