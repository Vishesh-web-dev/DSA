//TO PRINT ANSWER
int search(int* nums, int n, int target) {
    // Write your code here.
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    
    while (s <= e)
    {
        if(nums[mid] >= nums[0] && target < nums[0]){
            s = mid+1;
        }else if(nums[mid] < nums[0] && target >= nums[0]){
            e = mid-1;
        }else{
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                e = mid - 1;
            }else{
                s = mid+1;
            }
        }
        mid = s + (e-s)/2; 
    }
    return -1;
}