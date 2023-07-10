//subarrays vs subsequences

// question on subarray == Sum of all sub array

#include<iostream>
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            cout<<sum<<" ";
        }
        sum = 0;
    }
    cout<<endl;
    cout<<"no. of subarray is "<<(n*(n+1))/2;
    return 0;
}