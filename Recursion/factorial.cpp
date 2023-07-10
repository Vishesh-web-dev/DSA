#include<iostream>
using namespace std;
int fact(int n){
    // cout<<n<<endl; 
    // base case
    if(n == 0){
        return 1;
    }
    //calling itself for smaller value or say return recursive formula
    // fn = n * f(n-1)
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans;
    return 0;
}