#include<bits\stdc++.h>
using namespace std;
class Base_Class{
    public: 
        int var_base;
        void display(){
            cout<<"var_base: "<<var_base<<endl;
        }
};

class Derived_Class:public Base_Class{
    public: 
        int var_derived;
        void display(){
            cout<<"var_base: "<<var_base<<endl;
            cout<<"var_derived: "<<var_derived<<endl;
        }
};
int main(){
    //create an pointer of base class type
    //and point to the the address of derived class object
    //and this will not give any error cause
    Base_Class* pointer;
    Derived_Class obj;
    pointer = &obj;
    pointer->var_base = 6969; // we can access its members
    // pointer->var_derived = 90; //but we can not do this ?? 
    pointer->display(); //call base class display() cause of late binding

    Derived_Class* p2;
    p2 = &obj;
    p2->var_base = 100;
    p2->var_derived = 897;
    p2->display(); // base class function method overriding run time polymorphism
    return 0; 
}