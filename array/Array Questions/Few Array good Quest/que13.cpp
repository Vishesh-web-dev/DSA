//first repeating element  time complexity == O(n^2)

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int  i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; i++)
        {
            if (a[i] == a[j])
            {
                cout<<i+1;
                return 0; //****
            }
        }
    }
    cout<<"no one repeats";
    return 0;
}