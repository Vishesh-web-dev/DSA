//array should be rotated sorted array and unique
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
    //for size 0 and 1
    if(n == 1){
            cout<<nums[0];
            return 0;
        }else if(n == 2){
            cout<<min(nums[0],nums[1]);
            return 0;
        }
    // if rotated n time or rotated 0 times
    if(nums[0] < nums[n-1] && nums[0] < nums[1]){
        cout<<nums[0];
        return 0;
    }else if(nums[0] > nums[1] && nums[0] > nums[n-1]){
        cout<<nums[1];
        return 0;
    }
//
    int s = 1,l = n-2;
    int mid = (s+l)/2;
    while(s <= l){
        if(nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1]){
            cout<<nums[mid];
            break;
        }else if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]){
            cout<<nums[mid+1];
            break;
        }else if(nums[s] < nums[mid]){
            // right
            s = mid+1;
        }else if(nums[s] > nums[mid]){
            //left
            l = mid-1;
        }
        mid = (s+l)/2;
    }  
    return 0;
}