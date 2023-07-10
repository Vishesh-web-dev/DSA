//arrays and pointer
#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30};
    cout<<*arr<<endl; // arr[0] value would print
    // here arr is a pointer which stores 0th elements array 
    // and its value cant be change therefore
    int *arrptr = arr;
    // now we can access other values using *arrptr

    arrptr++;
    cout<<*arrptr<<endl; // derefferencing next element

    *arrptr = 40;       // accessing and changing its value 
    cout<<arr[1]<<endl;  

    arrptr--;

    for (int i = 0; i < 3; i++)
    {
        cout<<*arrptr<<" ";
        arrptr++;
    }
    cout<<endl;
    //another way
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr + i)<<" ";
        // arr++;   illegal 
    }
    
    return 0;
}