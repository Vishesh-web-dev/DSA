#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n == 0){
        cout<<0<<endl;
        return 0;
    }
    int st = 1,en = n;
    while(st < en){
        int mid = (st + en)/2;
        if(mid*mid == n){
            st = mid;
        }else if(mid*mid < n){
            st = mid+1;
        }else{
            en = mid -1;
        }
    } 
    cout<<st<<endl;
    return 0;
}