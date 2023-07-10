#include<iostream>
#include<string>

using namespace std;

int main(){
    //address of variable
    int a = 5;
    cout<<"address: "<<&a<<"\n";

    //null pointer
    int *p = 0; //this pointer stores nothing ==> this points to non existing memoery
    // cout<<*p<<endl; // does not print anything ==> segmentation fault

    //reintialize or changing value
    p = &a;
    cout<<++*p<<endl; //print 6
    cout<<a<<endl;//print 6

    char ch ='a';
    char *pc = &ch;

    //size of a and pointer
    cout<<"size of a is: "<<sizeof(a)<<endl;
    cout<<"size of p is "<<sizeof(p)<<endl; //4
    cout<<"size of char ch is: "<<sizeof(ch)<<endl;
    cout<<"size of pc(char) pointer: "<<sizeof(ch)<<endl; //4 or 1 ???


    //string pointer
    string s =  "Vishesh";
    string *sp = &s;
    cout<<"Size of string pointer: "<<sizeof(sp)<<endl; // 4
    
    return 0;
}



