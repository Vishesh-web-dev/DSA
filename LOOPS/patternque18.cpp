//ABCD... TRIANGLE
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num1 = 65,num2 =65;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<char(num1)<<" ";
        }
        num1++;
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        { 
            cout<<char(num2)<<" ";
            num2++;
        }
        cout<<endl;
    }
    return 0;
}