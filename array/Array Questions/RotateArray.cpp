#include<iostream>
using namespace std;

int main(){
    //approach 1 
    //O(n^2) and O(1) 
        // while(k--){
        //     int l = nums[nums.size() - 1];
        //     for(int i = nums.size() - 2; i>= 0;i--){
        //         nums[i+1] = nums[i];
        //     }
        //     nums[0] = l;
        // }

    // appraoch 2
    //O(n) and O(n) 
        // int n = nums.size();
        //  int arr[n];
        //
        // for(int i = 0;i<n;i++){
        //     arr[(i+k)%n] = nums[i];
        //     
        // } 
        // copying arr vector in nums
        // arr = nums;
    //appraoch 3
    //O(n) and O(1) 
    //reverse the array,then reverse first k elements, then reverse remaining array
        // void reverse(vector<int>& nums,int s,int e){
        //     while(s<e){
        //         swap(nums[s],nums[e]);
        //         s++;e--;
        //     }
        // }
        // int n = nums.size();
        // //imp step
        // k = k%n;
        // int s = 0, e = n-1;
        // reverse(nums,s,e);
        // s = 0,e = k-1;
        // reverse(nums,s,e);
        // s = k,e = n-1;
        // reverse(nums,s,e);


    //apppraoch 4
        //placing the element to its write position while
        //keeping the track of the value of replaced one 


    return 0;
}