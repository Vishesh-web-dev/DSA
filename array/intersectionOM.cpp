//using while loop and 2 pointers to minimize the unnessecary 
// iterations and comparisions since are sorted  
#include<iostream>
#include<vector>
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
    vector<int> ans;
    int st1 = 0, st2 = 0;
    while(st1 <= n-1 && st2 <= m-1){
        if(a1[st1] == a2[st2]){
            ans.push_back(a1[st1]);
            st1++;
            st2++;
        }else if (a1[st1] > a2[st2])
        {
            st2++;
        }else{
            st1++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

//appraoch 2
 unordered_set<int> s1;
        unordered_set<int> s2;
        for(int i = 0 ; i < nums1.size();i++){
            s1.insert(nums1[i]);
        }
        
        for(int i = 0 ; i < nums2.size();i++){
            s2.insert(nums2[i]);
        }

        unordered_map<int,int> m;

        for(auto i : s1){
            m[i]++;
        }
        for(auto i : s2){
            m[i]++;
        }

        vector<int> ans;
        for(auto i : m){
            if(i.second == 2){
                ans.push_back(i.first);
            }
        }
        return ans;