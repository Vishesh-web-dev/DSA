#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>a2[i];
    }
    vector<int> ans = {};
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = k; j < m; j++)
        {
            if(a1[i] == a2[j]){
                ans.push_back(a1[i]);
                k++;
                break;
            }
        }
    }
    // print vector
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}