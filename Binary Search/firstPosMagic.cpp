#include<bits\stdc++.h>
using namespace std;

int firstpos(int arr[],int s,int e,int k){
    int mid = s+(e-s)/2;
    //jo condition s ke liye hogi vo answer milege 
    while(s < e){
        if(arr[mid] <= k){
            e = mid;
        }else{
           s = mid +1;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int lastpos(int arr[],int s,int e,int k){
    int mid = s+(e-s)/2;
    while(s < e){
        if(arr[mid] > k){
            e = mid;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    cout<<firstpos(arr,0,n-1,2)<<endl;
    cout<<lastpos(arr,0,n-1,2)<<endl;

    
    delete arr;
    return 0;
}