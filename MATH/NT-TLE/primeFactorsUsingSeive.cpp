#include<bits\stdc++.h>
using namespace std;
#define N 1000009
vector<int> spf(N,-1); //smallest prime factor

//finding prime Factors
void primeFactors(vector<int>& ans,int n){
    if(n == 1)
        return;
    int fac = spf[n];
    ans.push_back(fac);
    n = n/fac;
    primeFactors(ans,n);
}

//solve function
void solve(){
    int n;
    cin>>n;
    vector<int> ans;
    primeFactors(ans,n);
    for(auto i : ans){cout<<i<<" ";}
    cout<<endl;
}

int main(){
    //here we precompute smallest prime factor vector
    //all the theory is in note book of cp
    int t;
    cin>>t;

    //precompute
    for(int i = 2; i < N;i++){
        if(spf[i] == -1){
            int mul = 1;
            while(mul*i < N){
                //if not updated then only update
                if(spf[i*mul] == -1){
                    spf[mul*i] = i;
                }
                mul++;
            }
        }
    }
    //run for all testCases
    while(t--){
        solve();
    }   
    return 0;
}