#include<bits\stdc++.h>
using namespace std;
class A{
    int a,b;
    public: 
        A(int a,int b){
            this->a = a;
            this->b = b;
        }
};
class B: public A{
    int c, d;
    public: 
        B(int a,int b,int c,int d):A(a,b){
            this->c = c;
            this->d = d;
            // cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
        }
};
class C: public B{
    int e, f;
    public: 
        //error
        // C(int a,int b,int c,int d,int e,int f):A(a,b),B(c,d){
        //     this->e = e;
        //     this->f = f;
        //     cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";
        // }
        //
        //correct
        C(int a,int b,int c,int d,int e,int f):B(a,b,c,d){
            this->e = e;
            this->f = f;
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<"\n";
        }
};
int main(){
    C obj1(1,2,3,4,5,6);
    return 0;
}