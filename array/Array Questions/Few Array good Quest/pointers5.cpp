//theory in note book
//passing pointers to function

#include<iostream>
using namespace std;
    // void swap(int a ,int b){
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    void swap(int* a,int* b){ // pointers mai store kiya 
        int temp = *a;
        *a = *b;
        *b = temp; // adderess me jo values hai unko swap kiya hai
    }
int main(){
    int a = 2;
    int b = 5;

    // swap(a,b);
    // cout<<a<<" "<<b;  //  here a and b will not change because we are sending values in function not variables itself therefore we use pointers
    int* aptr = &a;
    int* bptr = &b;

    swap(aptr,bptr); // address bheja  
//or
    // swap(&a,&b); // call by reffernece

    
    cout<<a<<" "<<b;  // it will get swap this is called pass by reffernce
    return 0;

}