#include<iostream>
using namespace std;

int main(){
    //a^b in log(b) T.C.
    int a,b;
    cin>>a>>b;

    int res = 1;
    while(b>0){
        //if odd multiply extra a with result
        if(b&1){
            //odd
            res = res*a;
        }
        //square
        a *= a;
        //divide by 2
        b = b>>1;
    }
    //multiply result with a now
    // res *= a;
    cout<<res<<endl;
    return 0;
}