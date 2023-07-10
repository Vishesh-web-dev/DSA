#include<bits\stdc++.h>
using namespace std;
void insertionSort(int arr[],int i,int n){
    if(i == n){
        return;
    }

    int currElem = arr[i];
    int j = i;
    while(j > 0 && arr[j-1] > currElem){
        arr[j] = arr[j-1];
        j--;
    }
    arr[j] = currElem;
    insertionSort(arr,i+1,n);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    insertionSort(arr,1,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete arr;
    return 0;
}