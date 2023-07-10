//running sum of an array
//input = [1,1,1,1,1] then output is 1,2,3,4,5
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + sum;
        sum = arr[i];
        cout<<arr[i]<<" ";
    }
    
    return 0;
}