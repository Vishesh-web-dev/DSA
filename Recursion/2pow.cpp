#include<iostream>
using namespace std;
double twopow(int n){
    //write base first
    if(n == 0){
        return 1;
    }
    //recurrence relation
    return 2*twopow(n-1);
}
int main(){
    int n;
    cin>>n;
    double ans = twopow(abs(n));
    if(n < 0){
        cout<<1/ans;
    }else{
        cout<<ans;
    }
    return 0;
}