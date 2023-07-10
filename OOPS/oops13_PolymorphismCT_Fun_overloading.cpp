#include<bits\stdc++.h>
using namespace std;
class A
{
private:
    /* data */
public:
    void sayHello(){
        cout<<"Hello Vishesh"<<endl;
    }
    
    // wrong
    // int sayHello(){
    //     cout<<"Hello "<<endl;
    //     return 1;
    // }
    // wrong
    // void sayHello(){
    //     cout<<"Hello"\n;
    // }

    //correct
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
    //correct
    void sayHello(char a){
        cout<<"Hello "<<a<<endl;
    }
    //correct
    int sayHello(int n){
        cout<<"Hello "<<n<<endl;
        return 1;
    }
};


int main(){
    A obj;
    // obj.sayHello(); //error since same defination so can not be overloaded
    obj.sayHello();
    obj.sayHello("Vishesh");
    obj.sayHello('v');
    obj.sayHello(5);
    return 0;
}