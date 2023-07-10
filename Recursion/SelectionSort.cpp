#include<bits\stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
    //ek case ke liye solve kro baaki apne app ho jaega 
    if(n == 1)return;
    int min = INT_MAX;
    int minI = 0;
    for(int i = 0 ; i < n ; i++){
        if(min > arr[i]){
            minI = i;
            min = arr[i];;
        }
    }
    swap(arr[minI],arr[0]);
    selectionSort(arr+1,n-1);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    //minimum dhunte hai and uske arr ke first idx mai daal do
    selectionSort(arr,n);
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
    
    delete arr;
    return 0;
}