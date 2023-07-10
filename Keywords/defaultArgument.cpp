#include<iostream>
using namespace std;
int print(int *arr,int n,int start = 0){
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {11,22,33,44,55};
    print(arr,5,2);
    print(arr,5);
    return 0;
}