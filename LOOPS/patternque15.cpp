// palindromic pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k =1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)  // spaces
        {
            cout<<"  ";
        }
        for (int j = 1; j <= 2*i-1; j++)  // numbers or * 
        {
            cout<<k<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
}