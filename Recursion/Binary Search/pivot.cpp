class Solution {
public: 
    int pivot(vector<int>& nums , int s,int e){
        int mid = s + (e-s)/2;
        if(s >= e){
            return mid;
        }

        if(nums[0] > nums[mid] ){
            return pivot(nums,s,mid);
        }else{
            return pivot(nums,mid+1,e);
        }
    } 
    int findMin(vector<int>& nums) {
        int n = nums.size();
        //for size 0 and 1
        if(n == 1){
            return nums[0];
        }else if(n == 2){
            if(nums[1] > nums[0]){
                return nums[0];
            }else{
                return nums[1];
            }
        }
        if(nums[0] < nums[n-1] && nums[0] < nums[1]){
            return nums[0];
        }

        // int s = 0, e = n - 1;
        // int m;
        // while(s<e){
        //     m = s+(e-s)/2;
        //     if(nums[m] < nums[0]){
        //         e = m;
        //     }else{
        //         s = m+1;
        //     }
        // }     
        return nums[pivot(nums,0,n-1)];
    }
};