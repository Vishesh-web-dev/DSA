//reversal question for array by d
#include<iostream>
using namespace std;

int main(){

    int n;
    int d;
    cin>>n>>d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < d; i++)
    {
        int last = arr[n-1];
        for (int j = n-2; j >= 0; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[0] = last;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}