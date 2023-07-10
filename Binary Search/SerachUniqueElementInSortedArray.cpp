class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //B.F.
        // XOR Method
        // int elem = nums[0];
        // for(int i = 1 ; i < nums.size() ; i++){
        //     elem = elem ^ nums[i];
        // }
        // return elem;

        //USING B.S.
        //observation sizze would always be odd
        //agar first wala paired eleme mila toh second pr jaenge
        //then odd numbers elements jaha present ho waha jaengee
        //agar elem ka koi pair nhi toh answer
        //also take care of first and last element

        //if size is zero
        if(nums.size() == 1){
            return nums[0];
        }
        int s= 0,e= nums.size()-1;
        //edge cases
        if(nums[s+1] != nums[s]){
            return nums[s];
        }
        if(nums[e] != nums[e-1]){
            return nums[e];
        } 
        int mid = s+(e-s)/2;
        //intituition
        //second pair pr jao  then fir odd number wale side pr jao

        while(s <= e){
            //for answer
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }

            //if paired element aage hai toh aage jao
            if(nums[mid] == nums[mid+1]){
                mid++;
            }

            // jaha pr odd numbers of elements hai waha jao
            if(((mid - s) + 1)&1){
                e = mid-1;
            }else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }

        return 0;
    }
};