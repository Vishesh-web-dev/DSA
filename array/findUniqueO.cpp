// n = 2m+1 . i.e.. 1 2 1 2 3 (same elements frequency is 2 only)
#include<iostream>
using namespace std;
int unique(int a[],int n){
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {
        ans = ans^a[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<unique(a,n);
    return 0;
}