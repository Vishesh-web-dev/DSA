//first repeating element == time complx < O(n^2)
// base idea ek aur array banege which 
//stores the first occurence index of a particular element a[i]
// initialize the idx[ ] with -1 and get min og idx[] at last
//
#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    const int N = 1e6+2;
    int idx[N] ;
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }


    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx,idx[arr[i]]);
        }else
        {
            idx[arr[i]] = i;
        }
        
        
    }
    if (minidx == INT_MAX)
    {
        cout<< "-1";
    }else
    {
        cout<<minidx + 1<<endl;
    }
    
    return 0;
}