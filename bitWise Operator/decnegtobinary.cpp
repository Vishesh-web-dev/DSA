//n is negative
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //ignore -ve
    n = abs(n);
    //convert it to binary
    int ans = 0,i =0;
    while(n!=0){
      int bit = n&1;
      //reverse flow jo bit milegi pehle vo last mai  
      ans = bit*pow(10,i) + ans;
      n = n >> 1;
      i++;
    }
    //now take 2's compilment of ans
    ans = ~ans + 1;
    cout<<ans;
    return 0;
}