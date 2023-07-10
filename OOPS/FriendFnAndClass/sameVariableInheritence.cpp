#include<bits\stdc++.h>
using namespace std;
class one{
    public: 
        int a;
};
class two:public one{
    public: 
        int a;
        void print(one obj){
            cout<<(obj.one::a);
        }
};
int main(){
    two obj2;
    obj2.a = 10;
    one obj1;
    obj1.a = 5;
    obj2.print(obj1);
    return 0;
}