#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 1; i < n; i++)
    {
        for(int j = 0 ; j < n-1 ; j++){
            arr[i][j] += arr[i-1][j+1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i][0]<<" ";
    }
    for(int i = 1 ; i < n ; i++){
        cout<<arr[n-1][i]<<" ";
    }
    return 0;
}