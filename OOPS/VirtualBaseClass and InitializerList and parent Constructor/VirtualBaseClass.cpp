#include<bits\stdc++.h>
using namespace std;
class A{
    public: 
    int a;
};
class B: virtual public A{ //runs now
    public:
};
class C: virtual public A{ //runs now
    public:
};
class D: public B,public C{};
int main(){
    D obj; //both B and C checks if a is passed once now by adding virtual keyword
    //try removing virtual keyword it will give error
    //here we create A as virtual base case 
    //which tells the child if you passed it down check it passed once only
    obj.a = 10; //
    cout<<obj.a<<endl;  
    return 0;
}