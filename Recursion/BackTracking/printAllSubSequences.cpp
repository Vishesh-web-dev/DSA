#include<bits\stdc++.h>
using namespace std;
void print(vector<int> temp){
    if(temp.size() == 0)return;
    for(int i: temp){
        cout<<i<< " ";
    }
    cout<<endl;
}
void printSubseq(vector<int> temp, int arr[], int n, int i){
    //appraoch 1
    if(i == n){
        print(temp);
        return;
    }
    //not pick
    printSubseq(temp,arr,n,i+1);

    //pick
    temp.push_back(arr[i]);
    printSubseq(temp,arr,n,i+1);

    
    //appraoch 2
    // if(i == n){
    //     return;
    // }

    // for(int j = i ; j < n; j++){
    //     temp.push_back(arr[j]);
    //     print(temp);
    //     printSubseq(temp,arr,n,j+1);
    //     temp.pop_back();
    // }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<int> temp;
    int i = 0; 
    printSubseq(temp,arr,n,i);
    return 0;
}