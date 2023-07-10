//mine optimization using binary search
#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;

    int s = 0,l = n-1;
    int fpos = -1;
    int mid = (s+l)/2;
    while(s <= l){
        if(arr[mid] == k){
            fpos = mid;
            //left mai jao
            l = mid - 1;
        }else if(arr[mid] > k){
            // left 
            l = mid-1;
        }else{
            // right
            s = mid +1;
        }
        mid  = (s+l)/2;
    }
    s = 0;
    l = n-1;
    int lpos = -1;
    mid = (s+l)/2;
    while(s <= l){
        if(arr[mid] == k){
            lpos = mid;
            // right
            s = mid + 1;
        }else if(arr[mid] > k){
            // left
            l = mid-1;
        }else{
            // right
            s = mid +1;
        }
        mid  = (s+l)/2;
    }
    cout<<fpos<<" "<<lpos<<endl;
    return 0;
} 