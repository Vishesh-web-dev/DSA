// https://codeforces.com/problemset/problem/1296/A   

#include<bits\stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i = 0; i< n ; i++){
            cin>>arr[i];
        }
        int oddCount = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]&1){
                oddCount++;
            }
        }

        if(oddCount > 0 ){
            if(oddCount == n && n%2 == 0){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }else{
            cout<<"NO\n";
        }
        delete arr;   
    }
    
    
    return 0;
}