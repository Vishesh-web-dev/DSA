#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
                swap(arr[i],arr[j]);
        }
    }
}
void PrintArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6] = {8,11,1,6,17,4};
    SelectionSort(arr,6);
    PrintArr(arr,6);
    int r[10] = {10,5,4,9,5,2,6,1,2,1};
    SelectionSort(r,10);
    PrintArr(r,10);
    return 0;
}