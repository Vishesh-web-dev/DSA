//count number of 1's in sorted array
#include<iostream>
using namespace std;
int fPos(int arr[],int n,int k){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] < k){
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int lPos(int arr[],int n,int k){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] <= k){
            s = mid + 1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return s-1;
}
int main(){
    //find first and last position index and subtract them
    int arr[9] = {0,0,0,0,0,0,0,0,0};
    int k = 1;
    int f = fPos(arr,9,k);
    int l = lPos(arr,9,k);
    cout<<"Number of 1's :"<<l-f+1<<endl;
    return 0;
}