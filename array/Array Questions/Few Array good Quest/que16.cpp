//smallest positive missing number 
//to find the smallest positive missing number from array
// O(n) 
//base idea = build a boolean cheak[] array that will depict if aany element x
// is present in the array or not 
// iterate over the array and mark non -negative a[i] as true 

#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }

    bool check[INT16_MAX];
    for (int i = 0; i < INT16_MAX; i++)
    { 
      check[i] = false;
    }
    int minNumb = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
      check[arr[i]] = true;
      minNumb = min(minNumb,arr[i]);
    }
    for (int i = minNumb; i < INT16_MAX; i++)
    {
      if (check[i] == false)
      {
        cout<<i;
        return 0;
      }
    }
    return 0;
}