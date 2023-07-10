//see notes in copy 
#include<bits\stdc++.h>
using namespace std;
class A{
    public:
        A(){
            cout<<"I am A's constructor\n";
        }
};
class B: public A{
    public: 
        B(){
            cout<<"I am B's constructor\n";
        }
};
int main(){
    B obj1; //here A's constructor is called first then B's constructor is called
    return 0;
}