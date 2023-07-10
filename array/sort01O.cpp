//using 2 pointers
// sort array of 0 and 1 
// brute count 0 and 1 and place them O(n)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int s = 0,l = n-1;
    while(s<=l){
        if(arr[s] == 1 && arr[l] == 0){
            swap(arr[s],arr[l]);
            s++;
            l--;
        }else if(arr[s] == 0){
            s++;
        }else if(arr[l] == 1){
            l--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} 