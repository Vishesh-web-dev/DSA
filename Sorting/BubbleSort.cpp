#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(int arr[], int n)
{   
    bool swapped = false;
    // Write your code here.
    while(n>0){
        for(int i = 0;i<n-1;i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
        n--;
    }
//     sort(arr.begin(),arr.end());
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
    bubbleSort(arr,6);
    PrintArr(arr,6);
    int r[10] = {10,5,4,9,5,2,6,1,2,1};
    bubbleSort(r,10);
    PrintArr(r,10);
    return 0;  
}