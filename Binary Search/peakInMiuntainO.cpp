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

    int s = 0, l = n-1;
    int mid = (s+l)/2;
    while(s < l){
        if(arr[mid] <= arr[mid+1]){
            s = mid+1;
        }else{
            l = mid;
        }
        mid = (s+l)/2;
    }
    cout<<arr[s]<<endl;
    return 0;
}