// pointers
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* aptr = &a;
    cout<<aptr<<endl; // address of a
    cout<<* aptr<<endl;// derefferencing it will print 10
    cout<<a<<endl; // 10 
    *aptr = 20; // *aptr se apn a ki value ko bhi acces kr skte hai 
    cout<<a<<endl; // 20
    return 0;
}