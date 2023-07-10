#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    int sum[n];
    sum[0] = arr[0];
    int prevSum = 0;
    for(int i = 1 ; i < n ; i++){
        sum[i] = arr[i] + sum[i-1];
    }
    //lets we ask give sum from i = 1 to j = 3
    int i = 1, j = 3;
    cout<<sum[j] - sum[i-1];
    //if we do above statement n times then our time complexity would be O(2n)
    //In brute force we will just countinue to sum for each query repeadealty then our Complexity O(n^2)
    delete []arr;
    return 0;
}