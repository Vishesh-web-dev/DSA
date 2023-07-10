//maximum sum subarray problem 
// my approach
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int maxsum = INT_MIN ; 

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            maxsum = max(sum,maxsum);
        }
        sum = 0;
    }
    cout<<maxsum;
    return 0;
}