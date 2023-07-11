class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // B.F.
        // int sum = 0,count = 0;
        // for(int i = 0 ; i < nums.size(); i++){
        //     for(int j = i ; j < nums.size(); j++){
        //         sum += nums[j];
        //         if(sum == k){
        //             count++;
        //         }
        //     }
        //     sum = 0;
        // }
        
        // return count;

        //optimized
        //take prefix sum 
        //now create an empty unoreder_map
        //iterate over prefix sum
        //serach nums[i]-k is present in map or not
        //if not then cnt++ 
        //also add current element in the map ???
        //abhi insert kyu kyuki esa krne se 
        //jo bhi j ke peeche wale i honge vo he cnt(that's why need to track how many times they have occured) ho rhe honge ***
        unordered_map<int,int> mpp;
        for(int i = 1 ; i < nums.size() ; i++){ 
           nums[i]+=nums[i-1];
        }
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == k)cnt++;
            if(mpp.find(nums[i] - k) != mpp.end()){
                cnt+=mpp[nums[i]-k]; //add number of times its has ocuured
            }
            mpp[nums[i]]++; //occured again
        }
        return cnt;
    }
};