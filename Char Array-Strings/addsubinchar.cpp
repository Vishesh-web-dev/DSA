#include<iostream>
using namespace std;
int sizeOfarr(char arr[]){
    int len = 0;
    while(arr[len]!='\0'){
        len++;
    }
    return len;
}
int main(){
    char arr[100];
    cin>>arr;
    //do change all a to c and b to D using ascii value (i.e using add and sub)
    int size = sizeOfarr(arr);
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 'a'){
            arr[i] = arr[i] + 2;
        }else if(arr[i] == 'b'){
            arr[i] = arr[i] - 'a' + 'A' + 2;
            //or
            // arr[i] = arr[i] - 'a' + 'C';
        }
    }
    cout<<arr;
    return 0;
}