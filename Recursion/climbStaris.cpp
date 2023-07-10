#include<bits\stdc++.h>
#define m 1000000007
using namespace std;
int countStairs(int n){
    if(n == 0)return 1;
    if(n < 0)return 0;
    return (countStairs(n-1)%m + countStairs(n-2)%m)%m;
}
int main(){
    int n;
    cin>>n;
    cout<<countStairs(n);
    return 0;
}