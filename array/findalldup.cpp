//find all duplicates in the array in O(N) AND O(1) SPACE

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> nums[n];
    for(int i = 0; i< n ;i++){
        cin>>nums[i];
    }
    //visited approach
    vector<int> ans;
    for(int i = 0; i < nums.size() ; i++){
        int id = abs(nums[i]);
        if(nums[id - 1] < 0){
            ans.push_back(id);
        }else{
            nums[id -1] = -nums[id - 1];
        }
    }
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }        
    return 0;
}