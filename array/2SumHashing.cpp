//using hashing
//O(n) and o(n)
//approach : search target- arr[i] in the map and their index should not be same
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    unordered_map<int,int> map;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        map[a[i]] = i;
    }

    for(int i = 0 ; i < n ; i++){
        if(map.find(k - a[i]) != map.end() && map[k-a[i]] != i){
            cout<<"Yes\n";
            return 0;
        }
    }    
    cout<<"No\n";
    return 0;
}