#include<bits\stdc++.h>
using namespace std;
void merge(int arr[],int s,int e){
    int mid = s+ (e-s)/2;
    //1way 2 arrays and merge them 
    int len1 = mid-s+1;
    int *first = new int[len1];
    //put first len1 elements of arr in first
    int mainIdx = s; //vvimp imp
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIdx++];
    }
    
    int len2 = e-mid;
    int *second = new int[len2];
    mainIdx = mid+1; //imp
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIdx++];
    }
    
    mainIdx = s; //imp equal to s ==> it can be not only 0  but it ranges 
    int i = 0,j = 0;
    while(i < len1 && j < len2){
        if(first[i] > second[j]){
            arr[mainIdx++] = second[j++];
        }else{
            arr[mainIdx++] = first[i++];
        }
    }

    while(i < len1){
        arr[mainIdx++] = first[i++];
    }

    while (j < len2)
    {
        arr[mainIdx++] = second[j++];
    }
    
    //now using 2 pointers
    //this means that we will not create two arrays 
    //and sort them using indexes only by creating a whole new array

}
void mergeSort(int arr[],int s,int e){
    if(s >= e)return;
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
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
    
    delete arr;
    return 0;
}