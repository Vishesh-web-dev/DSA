#include<bits\stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int k){
    //reverse iteration
    if(n == 0){
        return -1; //nhi mila
    }
    if (arr[n-1] == k)
    {
        //mil gya 
        return n-1;
    }else{
        return linearSearch(arr,n-1,k);
    }
    
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    int k;cin>>k;
    cout<<linearSearch(arr,n,k);
    delete arr;
    return 0;
}