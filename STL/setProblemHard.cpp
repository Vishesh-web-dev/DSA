//leetcode
//minimum abs diff between elem with constraints
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        if(x == 0)return 0;
        int n = nums.size();
        set<int> s;
        int mini = INT_MAX;
        for(int i = x ; i < n ; i++){
            s.insert(nums[i-x]);
            auto itr = s.upper_bound(nums[i]);
            if(itr == s.end()){
                itr--;
            }
            //this value referse either equal or next greater
            mini = min(mini,abs(*itr-nums[i]));
            //considering this case for value before upper bound
            if(itr != s.begin()){
                itr--;
                mini = min(mini,abs(*itr-nums[i])); 
            }
        }
        return mini;
    }
};