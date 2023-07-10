// using euclid algo
#include<iostream>
using namespace std;
int gcd(int a ,int b){
    if(b == 0)return a;
    return gcd(b,a%b);
}
// int gcd2(int a, int b){
//     while(b!=0){
//         int temp = a;
//         // int temp2 = b;
//         a = b;
//         b = temp%b;
//     }
//     return a;
// }
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}