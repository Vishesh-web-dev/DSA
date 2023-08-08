class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        //hash table mai kitno ke sath 
        //i-j == nums[i] - nums[j] hai i.e.  
        //i - nums[i] = j - nums[j]

        //unko count krlo 
        //ans answer += nums.size() - count
        // imp i < j  
        //total number of subarrays are = ((n-1) * (n)) / 2
        unordered_map<int,long long int> mpp;
        long long int n = nums.size();
        long long int goodPairs = 0;
        for(int i = 0 ; i < n ; i++){
            if(mpp.find(nums[i]-i) != mpp.end()){
                goodPairs += mpp[nums[i]-i]; //har ek index ke liye pair count
            }
            mpp[nums[i]-i]++; //map mai store
        }
        long long int badPairs = ((n*(n-1))/2) - goodPairs;
        return badPairs; 
    }
};