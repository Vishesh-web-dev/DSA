//leetcode
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //can be solved using sorting and 2ptr in nlogn
        //O(n) and O(n) time and space

        //a) if k == 0 handle it separatly
        // cnt number of occurences of each element and count element's who 
        // has occ. more then 1

        //b) FORWARD MAPPING 
        // find nums[i] + k as well as for nums[i] - k
        // and skip which are alreay present in the map (cause need unique)

        unordered_map<int,int> mpp;        
        int cnt = 0;
        if(k == 0){
            for(int i = 0 ; i < nums.size() ; i++){
                mpp[nums[i]]++;
            }
            for(auto i : mpp){
                if(i.second > 1)cnt++;
            }
            return cnt;
        }
      
        for(int i = 0 ; i < nums.size() ; i++){
            //if nums[i] already present in the array then skip
            if(mpp.find(nums[i]) != mpp.end()){
                continue;
            }

            if(mpp.find(nums[i]+k) != mpp.end()){
                cnt++;
                cout<<nums[i]<<" "<<nums[i]+k<<" \n";
            }
            if(mpp.find(nums[i]-k) != mpp.end()){
                cnt++;
                cout<<nums[i]<<" "<<nums[i]-k<<" \n";
            }
            mpp[nums[i]] = i;
        }
        return cnt;
    }
};