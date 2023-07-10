#include<iostream>
using namespace std;
int sizeOfarr(char arr[]){
    int len = 0;
    while(arr[len]!='\0'){
        len++;
    }
    return len;
}
void upperToLower(char arr[],int n){
    for(int i = 0; i < n ;i++){
        if(arr[i] <'a' || arr[i] > 'z'){
            arr[i] = arr[i] -'A' + 'a';
        }
    }
}
void lowerToUpper(char arr[],int n){
    for(int i = 0; i < n ;i++){
        if(arr[i] <'A' || arr[i] > 'Z'){
            arr[i] = arr[i] -'a' + 'A';
        }
    }
}
int main(){
    char arr[100];
    cin>>arr;
    upperToLower(arr,sizeOfarr(arr));
    cout<<arr<<endl;
    lowerToUpper(arr,sizeOfarr(arr));
    cout<<arr;
    return 0;
}