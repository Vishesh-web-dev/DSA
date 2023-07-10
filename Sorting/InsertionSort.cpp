#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i-1;
        while (arr[j] > curr && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
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
    insertionSort(arr,6);
    PrintArr(arr,6);
    int r[10] = {10,5,4,9,5,2,6,1,2,1};
    insertionSort(r,10);
    PrintArr(r,10);
    return 0;
}