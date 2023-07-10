//maximum sum subarray problem 
// in time complexity of O(n)
//*************imp************
// best optimised approach
// kadane's algorithm

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum = currsum + arr[i];
        if (currsum<0)
        {
            currsum = 0;
        }
        maxsum = max(currsum,maxsum);

    }
    
    cout<<maxsum;
    return 0;
}