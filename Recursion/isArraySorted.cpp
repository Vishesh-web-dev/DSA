#include<iostream>
using namespace std;
bool isArraySorted(int arr[],int n){
    if(n == 1)return true; //base case
    bool result = isArraySorted(arr,n-1); //result from all preivious returns
    return result && (arr[n-1] >= arr[n-2]); //if previous return is false and current is true it will keep on returning false
}
bool isArraySorted2(int arr[],int n){
    if(n == 1  || n == 0)return true; //base case
    if(arr[0] > arr[1]){
        return false;
    }else{
        //recusion sambhal lega
        return isArraySorted(arr+1,n-1);
    }
}
int main(){
    
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    if(isArraySorted2(arr,n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    delete arr;
    return 0;
}