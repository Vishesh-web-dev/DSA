class Solution {
public:
    bool check(vector<int>& nums) {
        int pairs = 0;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(nums[i] > nums[(i+1)%n]){
                pairs++;
            }
        }
        if(pairs > 1){
            return false;
        }else{
            return true;
        }
    }
};
//here nums[(i+1)%n] helps when i == n-1 and then i+1 == n
// hence i+1%n place us as 0th index 
//very imp above step
//also rotated sorted array jo nhi hoga usme arr[i] > arr[i+1] pairs ek se jyada honge