//ccreation of jaggered array using 2d dynamic memory allocation
#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n; //rows
    int m; //ther are jagered in other words these value changes
    cin>>n>>m;
    //declaration
    int **arr = new int*[n];
    int col = m,col2 = m;
    for(int i = 0 ;i< n;i++){
        arr[i] = new int[col]; //or *(arr+i)
        if(i%2==0){
            col++;
        }else{
            col--;
        }
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin>>arr[i][j];
        }
        if(i%2==0){
            col2++;
        }else{
            col2--;
        }
    }
    
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        if(i%2==0){
            m++;
        }else{
            m--;
        }
        cout<<"\n";
    }
    return 0;
}