#include<iostream>
using namespace std;
//specifying the column size is necessary while passing the number of columns
bool isPresent(int arr[][4],int n,int m,int target){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == target)return true;
        }
        
    }
    return false;
}
int main(){
    int arr[3][4];
    int target;
    cout<<"Target: ";
    cin>>target;
    cout<<"Data to serach: ";
    
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j < 4; j++){
            cin>>arr[i][j];
        }
    }
    if(isPresent(arr,3,4,target)){
        cout<<"Found\n";
    }else{
        cout<<"Not Found\n";
    }
    return 0;
}