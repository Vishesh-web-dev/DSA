#include<bits\stdc++.h>
using namespace std;
//front delcaration for friend void add of Class X to know that Y exist forward
class Y;
class X{
    int data;
    public: 
    friend void add(X,Y);
        void setValue(int value){
            data = value;
        }
};
class Y{
    int num;
    public:
    friend void add(X,Y);
        void setValue(int value){
            num = value;
        }
};

void add(X o1,Y o2){
    cout<<"Summaztion: "<<o1.data+o2.num; 
}
int main(){
    X a;
    Y b;
    a.setValue(5);
    b.setValue(3);
    add(a,b);
    return 0;
}