#include<bits\stdc++.h>
using namespace std;
int firstPos(int arr[],int s,int e,int k){
    int mid = s+(e-s)/2;    
    if(s >= e){
        return mid;
    }
    if(arr[mid] < k){
        firstPos(arr,mid+1,e,k);
    }else{
        firstPos(arr,s,mid,k);
    }
}
int lastPos(int arr[],int s,int e,int k){
    int mid = s+ (e-s)/2;
    if(s >= e){
        return mid;
    }
    if(arr[mid] > k){
        lastPos(arr,s,mid,k);
    }else{
        lastPos(arr,mid+1,e,k);
    }
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Target: ";
    cin>>target;

    cout<<"First Position: "<<firstPos(arr,0,n-1,target)<<endl;
    cout<<"Last Position: "<<lastPos(arr,0,n-1,target);
    delete arr;
    return 0;
}