// find max sum of subarray of size 3 in O(n) time complexity
//sliding window 
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

    
    int currsum = arr[0] + arr[1] + arr[2]; // this can be done by loops also acc to size of subarray
    int maxsum = currsum; 
    for (int i = 0; i < n-3; i++)
    {
       currsum = currsum + arr[i+3] - arr[i];
       maxsum = max(maxsum,currsum);
    }
    
    cout<<maxsum;
    return 0;
}