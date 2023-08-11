#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    //first col
    for(int i = 1 ; i < n ; i++){
        arr[i][0] += arr[i-1][0];
    }
    //first row
    for(int i = 1 ; i < m ; i++){
        arr[0][i] += arr[0][i-1];
    }

    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < n ; j++){
            arr[i][j] += arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}