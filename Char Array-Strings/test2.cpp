#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 5,k=2;
    vector<int> a;
        for(int i = 0 ;i<n ;i++){
            a[i] = 0;
        }
        int i = 0;
        int x = 0;
        while(a[i] == 0 || a[i] == 1){
            a[(i + x*k)%n]++;
            i = (i + x*k)%n;
            x++;
        }
        for(int i = 0;i<n;i++){
            cout<<a[i]<<" ";
        }
    return 0;
}