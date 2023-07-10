#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3; j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    int maxSumRow = INT32_MIN;
    int maxri;
    cout<<"Row Wise Sum: ";
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3; j++){
            sum += arr[i][j];
        }
        if(maxSumRow < sum){
            maxSumRow = sum;
            maxri = i;
        }
        cout<<sum<<" ";
        sum = 0;
    }  
    cout<<endl;
    //coloumn wise sum
    int maxSumCol = INT32_MIN;
    int maxci;
    cout<<"Column Wise Sum: ";
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 3; j++){
            sum += arr[j][i];
        }
        
        if(maxSumCol < sum){
            maxSumCol = sum;
            maxci = i;
        }
        cout<<sum<<" ";
        sum = 0;
    } 

    //largest row sum and col sum
    cout<<"\nLargest Row Sum : "<<maxSumRow<<" Of Index: "<<maxri<<endl;
    cout<<"Largest Col Sum: "<<maxSumCol<<" Of Index: "<<maxci<<endl;
    return 0;
}