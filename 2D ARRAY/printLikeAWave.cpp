#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 4; j++){
            cin>>arr[i][j];
        }
    }    
    for (int col = 0; col < 4; col++)
    {
        if(col%2 == 0){
            for(int j = 0 ;j < 3; j++){
                cout<<arr[j][col]<<" ";
            }
        }else{
            for(int j = 2 ;j >= 0; j--){
                cout<<arr[j][col]<<" ";
            }
        }
    }
    return 0;
}