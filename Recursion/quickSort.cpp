#include<bits\stdc++.h>
using namespace std;
int partition(int *arr,int s,int e){
    int pivot = arr[s];
    //count all element lesser than pivot
    int count = 0;
    for (int i = s+1; i <= e; i++)
    {   
        if(arr[i] <= pivot){ //equal to means that all equal should be on left side
            count++;
        }
    }
    // now place it to its correct position  
    int pivotIdx = s+count;
    swap(arr[s],arr[pivotIdx]);

    //now put all lesser to one side and all greater to one side
    int i = s,j = e;
    while(i < pivotIdx && j > pivotIdx){
        if(arr[i] > pivot && arr[j] <= pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }else if(arr[i] > pivot){
            j--;
        }else{
            i++;
        }
    }
    //now return pivot index;
    return pivotIdx;
}
void quickSort(int *arr,int s,int e){
    if(s >= e)return;

    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
} 
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i< n ; i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    delete arr;
    return 0;
}