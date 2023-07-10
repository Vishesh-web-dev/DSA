#include<bits\stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    if(n == 0 || n == 1)return;
    //ek case solved
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //Recusive Call
    bubbleSort(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    delete arr;
    return 0;
}