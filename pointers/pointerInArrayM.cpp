#include<iostream>
using namespace std;

int main(){
    //this is mine program for testing i.e. hit and trail
    int arr[5] = {1,2,3,4,5};
    //i know that arr refers to the address of first element 
    int *p = arr;
    cout<<"Should print the first element of the array: "<<*p<<endl;
    (p)++;
    cout<<"Should print second element of the array: "<<*p<<endl;
    (p)--;
    cout<<"First elem: "<<*p<<endl;
    p += 4;
    cout<<"Fifth elem: "<<*p<<endl;

    int *p1 = arr;
    // int *p2  = arr+4; // this also works
    int *p2 = p; // p2 points to fifth element

    if(p1 > p2) // this means that p1 address is greater than p2
    {
        cout<<"p1 refers to array element of greater index\n";
    }else{
        cout<<"p2 refers to array element of greater index\n"; // this gets printed
    }  

    void *ptr;
    int i = 11;
    ptr  = &i;
    // (*ptr)++;
    // cout<<*ptr<<endl;
    
    //array
    int Array[6] = {5,4,7,8,4,9};
    int *pArr = Array;
    cout<<pArr[0]<<" "; //first element of Array

    char s = 66; //prints B
    cout<<s;

    cout<<'A' + 1; //66
    // i[arr] ??? 
    for (int i = 0; i < 5; i++)
    {
        cout<<i[Array];
    }
    
    return 0;
}