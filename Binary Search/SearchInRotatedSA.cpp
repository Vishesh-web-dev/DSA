#include<iostream>
using namespace std;
//reaching to answer AND STORING IN s
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    while (s < e)
    {
        if(arr[mid] >= arr[0] && key < arr[0]){
            s = mid+1;
        }else if(arr[mid] < arr[0] && key >= arr[0]){
            e = mid;
        }else{
            if(arr[mid] >= key){
                e = mid-1;
            }else if(arr[mid] < key){
                s = mid+1;
            }
        }
        mid = s + (e-s)/2; 
    }
    cout<<s<<endl;
    
    return 0;
}