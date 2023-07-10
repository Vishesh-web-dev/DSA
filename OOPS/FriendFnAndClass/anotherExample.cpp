#include<bits\stdc++.h>
using namespace std;
class c2; //forward declaration
class c1{
    int val1;
    public: 
    friend void exchange(c1 &,c2 & ); //imp
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};
class c2{
    int val2;
    public: 
    friend void exchange(c1 &,c2 &); //must include & here also for pass by reference else give error 
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};

void exchange(c1& ob1,c2& ob2){
    int temp = ob1.val1;
    ob1.val1 = ob2.val2;
    ob2.val2 = temp;
}
int main(){
    c1 first;
    first.indata(10);
    c2 second;
    second.indata(25);

    exchange(first,second);

    first.display();
    second.display();
    return 0;
}