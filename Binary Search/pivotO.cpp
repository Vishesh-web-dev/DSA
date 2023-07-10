#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    //if rotated 0 or n times
    if(nums[0] < nums[n-1] && nums[0] < nums[1]){
        cout<<nums[0]<<endl;
        return 0;
    }

    int s = 0, l = n-1;
    int mid = s + (l-s)/2;
    while(s < l){
        //compare with first elem
        if(nums[mid] >= nums[0]){
            // s to left
            s = mid+1;
        }else{
            // l to right 
            l = mid;
        }
        mid = s + (l-s)/2;
    }
    cout<<nums[s]<<endl;
    return 0;
}