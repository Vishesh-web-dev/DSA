//pointer arithmetic

#include<iostream>
using namespace std;

int main(){
    int a =10;
    int* aptr = &a;

    cout<<aptr<<endl; //  address of a  (it is in hexadecimal form)
    aptr++;
    cout<<aptr<<endl; // address of a + 4 ( since size of int is 4 byte)

    char ch = 'a';
    char* cptr = &ch;

    cout<<cptr<<endl; //  address of a  (it is in hexadecimal form)
    cptr++;
    cout<<cptr<<endl; // address of a + 1 ( since size of char is 1 byte)
    return 0;
}