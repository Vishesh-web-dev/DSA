#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    // n rows and m cols
    //creation 
    int **arr = new int*[n];//pointer array
    for(int i = 0 ; i < n ; i++){
        arr[i] = new int[m];//each pointer array corresponds to array
        //arr[i] = *(arr+i)
    }

    //input
    for(int i = 0 ; i< n; i++){
        for(int j = 0 ; j < m ;j++){
            cin>>arr[i][j]; //*(arr[i] + j) or *(*(arr+i)+j)
        }
    }

    //output
    for(int i = 0 ; i< n; i++){
        for(int j = 0 ; j < m ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deletion
    //first delete array corresponds to each pointer
    //then delete pointer array
    for (int i = 0; i < n; i++)
    {
        delete []arr[i];
    }
    delete []arr;

    //gives garbage value;
    // for(int i = 0 ; i< n; i++){
    //     for(int j = 0 ; j < m ;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}