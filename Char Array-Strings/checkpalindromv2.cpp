// remove non alphanumeric characters and convert all upper to lowercase
//here we are completely removing it 
//remove symbols and white spaces... 
//then check if palindrom
#include<iostream>
using namespace std;

int sizeOfarr(char arr[]){
    int len = 0;
    while(arr[len]!='\0'){
        len++;
    }
    return len;
}

void remove(char arr[],int n){
    int j = 0;
    for(int i = 0;i<s.length();i++){
            if(!((s[i] >= 'a' && s[i] <='z') || (s[i] >= 'A' && s[i] <='Z') || ((int)s[i] >= 48 && (int)s[i] <=57))){

            }
        }
}

void upperToLower(char arr[],int n){
    for(int i = 0; i < n ;i++){
        if(arr[i] <'a' || arr[i] > 'z'){
            arr[i] = arr[i] -'A' + 'a';
        }
    }
}

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
    //remove 
    remove(arr,sizeOfarr(arr));
    //lowercase
    upperToLower(arr,sizeOfarr(arr));
    //check palindrom
    cout<<palindrom(arr,sizeOfarr(arr));
    return 0; 
}