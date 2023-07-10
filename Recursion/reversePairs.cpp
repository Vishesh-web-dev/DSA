class Solution {
public:
    int count;
    void merge(vector<int>& nums,int s,int e,int mid){
        //counting reverse pairs
        
    }
    void mergeSort(vector<int>& nums,int s,int e){
        if(s < e)return;
        int mid = s+ (e-s)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1,e);
        merge(nums,s,e);
    }
    int reversePairs(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        count = 0;
        mergeSort(nums,s,e);
        return count;
    }
};