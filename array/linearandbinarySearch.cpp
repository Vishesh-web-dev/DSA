#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int n,int k){
    int s = 0,l = n-1;
    int mid = (s+l)/2;
    while(s<=l){
        if(arr[mid] == k){
            return mid;
        }else if(arr[mid] > k){
            l = mid - 1;
        }else{
            s = mid + 1;
        }
        mid = s + ((l-s)/2); //if s = l = max_Int than it will not give error
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}