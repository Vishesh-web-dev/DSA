//IMP Question
#include<bits\stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    //find prefix sum and store it in map 
    //and search prefixSum[i]-k == prefixSum in Map 
    //then size max(second-i)
    nums.insert(nums.begin(),0);
    unordered_map<int,int> mpp;
    for(int i = 1 ; i < nums.size() ; i++){
        nums[i] += nums[i-1];
        mpp[nums[i]] = i;
    }
    int sz = 0;
    int maxsz = INT_MIN;
    for(int i = 0 ; i < nums.size() ; i++){
        if(mpp.find(nums[i]+k) != mpp.end()){
            sz = mpp[nums[i]+k] - i;  
        }
        maxsz = max(maxsz,sz);
        sz = 0;
    }
    return maxsz;
}

int main(){
    int n = 5,k = 4;
    vector<int> nums = {1,2,1,0,1};
    cout<<getLongestSubarray(nums,k);
    return 0;
}