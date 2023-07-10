//imp
//maximum circular subarray sum
#include<iostream>
#include<climits>
using namespace std;
int kadanes(int n,int arr[]){
    int currsum = 0; 
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {    
        currsum = currsum + arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum,currsum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int wrapsum; 
    int nonwrapsum = kadanes(n,arr);   //  non wrap ka simply kadanes se 
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum = totalsum + arr[i];
        arr[i] = - arr[i];
    }
      //negative of sum of non contributing element = - kadanes(n,arr)
    wrapsum = totalsum - (-kadanes(n,arr)); // yaha pr negative arr ja rha hai
    cout<<max(wrapsum,nonwrapsum);
    return 0;
}