//n size array and elements are from 1 to n-1
#include<iostream>
using namespace std;
void dup(int a[],int n){
    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i] == a[j]){
                cout<<"Duplicate number is "<<a[i]<<endl;
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        cout<<"No duplicate found\n";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    dup(a,n);
    return 0;
}