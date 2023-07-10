#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max<array[i])
        {
            max = array[i];
            
        }
        if (min>array[i])
        {
            min = array[i];
        }
        
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}