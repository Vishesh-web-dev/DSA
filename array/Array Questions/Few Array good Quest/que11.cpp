//Long Arithematic Subarray == kickstart
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    
    int ans = 2;
    int sizeOfArithmeticArr = 2;
    int d;
    int pd = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    { 
      d = arr[i+1] - arr[i];
      if (d == pd)
      {
        ans++;
        sizeOfArithmeticArr = max(ans,sizeOfArithmeticArr);
      }else
      {
        ans = 2;
        pd = d;
      }
    }
    
    cout<<sizeOfArithmeticArr;
    return 0;
}