#include<iostream>
using namespace std;

int main(){
    // // int *p; // dont do this becasue it is pointing to some garbage address

    // //null pointer
    // int *p = 0; //this pointer stores nothing ==> null ==> this points to non existing memoery
    // // cout<<*p<<endl;  //segmentation fault

    // int i = 5;
    // p = &i; //reintializing
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int *q = &i; //second way of intitalization
    // if(q == p){
    //     cout<<"yes both pointer are equal because both stores address of i"<<endl;
    // }

    // int num = *p;  
    // int a  = num; //a stores value of num not num itself
    // a++; //incrementing value of a
    // cout<<num<<endl;//prints 5 only

    // //now if
    // int num = 5;
    // int *p = &num;
    // cout<<num<<" before\n";
    // (*p)++;
    // *p *= 2;
    // cout<<num<<" after\n"; // increase value of num by 1 ==> 6 and 6*2 = 12

    // //copying one pointer to another
    // int *q = p;
    // (*q)++; // increase value of num by 1 because it store its address
    // cout<<*q<<endl;


    int i = 5;
    int *t = &i;
    cout<<t<<" ";
    //imp for array concept
    t = t+1; //  increase address by size of int 
    cout<<t; // gives +4 address

    return 0;
}