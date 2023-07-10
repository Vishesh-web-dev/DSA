//reverse using function and swaping 
// method use two pointer method 
#include<iostream>
using namespace std;
void reverse(int a[],int n){
    int s = 0,e = n-1;
    while(s < e){
        swap(a[s],a[e]); //inbuild function
        s++;
        e--;
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    reverse(a,n);
    printarray(a,n);
    
//  swap() works for normal integers also
    // int a = 5,b = 6;
    // cout<<"a = "<<a<<" b = "<<b<<endl;;
    // swap(a,b);
    // cout<<"a = "<<a<<" b = "<<b;
    return 0;
}