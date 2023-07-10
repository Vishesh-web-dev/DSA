//pointer to pointer;

#include<iostream>
using namespace std;
    
int main(){
    int a = 10;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;
    cout<<ptr2<<endl;//address of ptr1
    cout<<*ptr2<<endl;//address of a || value of ptr1
    cout<<**ptr2<<endl; // a
    return 0;
}