
 class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        //b.f. O(n^2)
        // if(nums.size() == 1 && nums[0] == 0)return 1;
        // if(nums.size() == 1)return 0;
        
        // int count = 0;
        
        // for(int i = 0; i < nums.size() -1; i++){
        //     int j = i+1;
        //     while(true){
        //         if(j < nums.size() && nums[i] == 0 && nums[j] == 0){
        //             count++;
        //             j++;
        //         }else{
        //             break;
        //         }
        //     }
        //     if(nums[i] == 0)count++;
        // }
        // if(nums[nums.size() - 1] == 0)count++;
        // return count;

        //O(n) solution 
        long long int ans = 0;
        long long int count = 0;
        for(int i = 0; i< nums.size();i++){
            while(true){
                if(i < nums.size() && nums[i] == 0){
                    i++;
                    count++;
                }else{
                    break;
                }
            }
            ans += (count*(count+1)/2);
            count = 0;
        }
         return ans;
    }
};