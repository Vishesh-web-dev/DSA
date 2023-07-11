class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    //    //B.F. Sort and Check O(nlogn)
    //    sort(nums.begin(),nums.end());
    //    int cnt = 1;
    //    int currmax = 1;
    //    for(int i = 0 ; i < nums.size() - 1 ;i++){
    //        if(nums[i] == nums[i+1])continue;
    //        if(nums[i]+1 == nums[i+1]){
    //            cnt++;
    //        }else{
    //            currmax = max(currmax,cnt);
    //            cnt = 1;
    //        }
    //    }
    //    currmax = max(currmax,cnt);
    //    return currmax;  
    
    //Optimized Mine
        //using set O(n) 
        // unordered_set s(nums.begin(),nums.end());
        // if(s.size() == 0 || s.size() == 1)return s.size();
        // int next = 0, prev = 0,ans = INT_MIN;
        // int x;
        // for(int i:nums){
        //     x = i-1;
        //     while(s.find(x) != s.end()){
        //         prev++;
        //         s.erase(x);
        //         x--;
        //     }
        //     x = i+1;
        //     while(s.find(x) != s.end()){
        //         next++;
        //         s.erase(x);
        //         x++;
        //     }
        //     ans = max(ans,prev+next+1);
        //     prev = 0,next = 0;
        // } 
        // return ans;

        //Optimized O(2n)
        unordered_set s(nums.begin(),nums.end());
        if(s.size() == 0 || s.size() == 1)return s.size();
        int cnt = 0,ans = INT_MIN;
        int x;
        for(auto i : s){
            //if no prev exist
            if(s.find(i-1) == s.end()){
                cnt++;
                x = i+1;
                while(s.find(x)!=s.end()){
                    cnt++;
                    x++;
                }
                ans = max(cnt,ans);
            }
            cnt = 0;
        }
        return ans;
    }
};