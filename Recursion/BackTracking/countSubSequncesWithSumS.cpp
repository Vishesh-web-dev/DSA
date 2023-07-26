#include<bits\stdc++.h>
using namespace std;
int count(vector<int> nums,int s,int i,int cnt){
    if(i == nums.size()){
        if(s == 0){
            return 1;
        }
        return 0;
    }
    //pick 
    //no need to back track as we did not change originally in the value
    int pick = count(nums,s-nums[i],i+1,cnt);
    //not pick
    int notpick = count(nums,s,i+1,cnt);

    return pick+notpick;
}
int main(){
    int n,s;
    cin>>n>>s;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    int i = 0,cnt = 0;
    cnt = count(nums,s,i,cnt);
    cout<<cnt<<endl;
    return 0;
}