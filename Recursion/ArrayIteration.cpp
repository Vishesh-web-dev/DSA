#include<iostream>
using namespace std;
void printArrayElem(int *arr,int n){
    if(n == 0)return;
    printArrayElem(arr,n-1);
    cout<<arr[n-1]<<" ";
}

int main(){
    
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    printArrayElem(arr,n);

    delete arr;
    return 0;
}