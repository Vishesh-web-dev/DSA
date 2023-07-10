//in his variation we have normal string
#include<iostream>
using namespace std;
bool palindrom(char arr[],int n){
    
        int len = n;
        int st = 0,e = len-1;
        while(st<e){
            if(arr[st] != arr[e]){
                return false;
            }
            st++;
            e--;
        }
        return true; 
}
int main(){
    char arr[100];
    cin>>arr;
    int len = 0;
    while(arr[len]!='\0'){
        len++;
    }
    //check palindrom
    cout<<palindrom(arr,len);
    return 0;
}