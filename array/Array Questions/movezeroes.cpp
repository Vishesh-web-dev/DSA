//start iterating array and as we find non zero place to its correct position
//by maintaining the counter and skip all the zeroes
//then place all the zeroes by running loop from counter til 
// the array size and place zeroes their
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        for(int i = 0; i< nums.size() ; i++){
            if(nums[i] != 0){
                nums[counter] = nums[i];
                counter++;
            }
        }
        for(; counter < nums.size();counter++){
            nums[counter] = 0;
        }
    }
};

//solution 2 more optimized
void moveZeroes(vector<int>& nums) {
    int last = 0, cur = 0;
    
    while(cur < nums.size()) {
        if(nums[cur] != 0) {
            swap(nums[last], nums[cur]);
            last++;
        }
        
        cur++;
    }
}
//in above solution dry run it 

//same appraoch as above it jsut that 
// iterate over array and place the non zero to correct position
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[8] = {0,1,2,0,0,1,5,7};
    int l = 0;
    for (int i = 0; i < 8; i++)
    {
        if(arr[i] != 0){
            swap(arr[i],arr[l]);
            l++;
        }
    }
        for (int i = 0; i < 8; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        return 0;
}
