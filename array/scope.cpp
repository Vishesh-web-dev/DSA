#include<iostream>
using namespace std;
void updateArr(int arr[],int n){
    arr[0] = 4;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3] = {1,2,3};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"calling function\n";
    updateArr(arr,3);
    cout<<"back to main\n";
    cout<<"printing updated array\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}