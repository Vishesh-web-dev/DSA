//cheak palindrom question

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];  // yaha pr nth +1 element null char hoga vo apne app a jaega
    cin>>arr;
   
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            flag = 0;
            break;
        }
        
    }
     
    if (flag==true)
    {
        cout<<"yes";
    }else
    {
        cout<<"not a palindrom";
    }
    
    
    
    
    return 0;
}