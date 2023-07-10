#include<bits\stdc++.h>
using namespace std;
int BS(int arr[],int s,int e,int k){
    int mid = s + (e-s)/2;
    //ruk jao
    if(s > e){
        return -1;
    }

    //mil gya return krdo
    if(arr[mid] == k){
        return mid;
    }
    //nhi mila agge condition ke hisab se serach krlo
    if(arr[mid] > k){
        return BS(arr,s,mid-1,k);
    }else{
        return BS(arr,mid+1,e,k);
    }
}
int main(){
    int k ;
    cin>>k;
    int n ;
    cin>>n;
    
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    int s = 0, e = n-1;
    cout<<BS(arr,s,e,k);
    return 0;
}