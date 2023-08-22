// using euclid algo
#include<iostream>
using namespace std;
int gcd(int a ,int b){
    if(b == 0)return a;
    // cout<<a<<" "<<b<<" \n"; //dry run
    return gcd(b,a%b);
}

//minus approch (a > b)
//takes more time
int gcd2(int a ,int b){
    if(b == a)return a;
    if(b>a)return a;
    // cout<<a<<" "<<b<<" \n"; //dry run
    return gcd(b,a-b);
}
// int gcd3(int a, int b){
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
    cout<<gcd(a,b)<<"\n";
    // cout<<gcd(b,a);
    // cout<<"a%b=> "<<a%b<<" b%a=> "<<b%a;
    return 0;
}