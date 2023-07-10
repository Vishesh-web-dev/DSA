#include<iostream>
using namespace std;
    void increment(int* a){
        *a = *a + 10;
    }
int main(){
    int a = 10 ;
    int* aptr = &a;
    increment(aptr);
    cout<<a;
    return 0;
}