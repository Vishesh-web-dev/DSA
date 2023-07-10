//find mountain in logn time
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
    int s = 1,e = n-2;
    int mid  = (s+e)/2;
    while(s <= e){
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            cout<<arr[mid]<<endl;
            break; 
        }else if(arr[mid] <= arr[mid-1]){
            e = mid-1;
        }else if(arr[mid] <= arr[mid+1]){
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return 0;
}