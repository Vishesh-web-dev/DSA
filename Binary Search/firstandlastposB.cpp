#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;

    //using linear search
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k){
            cout<<i<<" ";
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(arr[i] == k){
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
}