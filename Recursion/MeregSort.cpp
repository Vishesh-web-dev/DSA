#include<bits\stdc++.h>
using namespace std;
int k = 0;
void merge(int arr[],int s,int e){
    
    int mid = s + (e-s)/2;
    //first array 
    int len1 = mid-s+1;
    int *first = new int[len1];
    //elements bhi daal dete hai
    int mainIdx = s; //imp equal to s ==> it can be not only 0  but it ranges 
    for(int i = 0 ; i < len1;i++){
        first[i] = arr[mainIdx++];
    }

    //second array
    int len2 = e-mid;
    int *second = new int[len2];
    //element daal do
    mainIdx = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIdx++];
    }

    //merge two sorted array
    int i = 0, j = 0;
    mainIdx = s; //imp equal to s ==> it can be not only 0  but it ranges 
    while (i < len1 && j < len2){
        if(first[i] > second[j]){
            // cout<<"first: "<<first[i] << " second: "<<second[j]<<" |";
            k+= (len1 - i);
        }
        if(first[i] <= second[j]){
            arr[mainIdx++] = first[i++];
        }else{
            arr[mainIdx++] = second[j++];
        }
        // for decreasing order  
        // if(first[i] > second[j]){
        //     arr[mainIdx++] = first[i++];
        // }else{
        //     arr[mainIdx++] = second[j++];
        // }

    }
    
    //remaining part ko daal do
    while (i < len1)
    {
        arr[mainIdx++] = first[i++];
    }
    while (j < len2)
    {
        arr[mainIdx++] = second[j++];
    }
    delete []first;
    delete []second;
}
void mergeSort(int arr[],int s,int e){
    if(s >= e){
        return;
    }
    int mid = s+(e-s)/2;
    //left part sort krna hai
    mergeSort(arr,s,mid);
    
    //right part sort krna hai
    mergeSort(arr,mid+1,e);

    //dono ko merge krndenge
    merge(arr,s,e);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nCount Inversions: "<<k<<endl;   
    delete []arr;
    return 0;
}