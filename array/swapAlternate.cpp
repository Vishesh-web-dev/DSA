//if a[] = {1,2,3,4} than o/p is a[] = {2,1,4,3}
#include<iostream>
using namespace std;
void altswap(int a[],int n){
    for (int i = 0; i < n-1; i+=2)
    {
        swap(a[i],a[i+1]);
    }
}
void printarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    altswap(arr,n);
    printarray(arr,n);
    return 0;
}