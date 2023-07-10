//pascals triangle

#include<iostream>
using namespace std;

int fac(int number){
    int ans= 1;
    if(number==0){
        return 1;
    }
    for (int i = 1; i <= number; i++)
    {
        ans *= i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}