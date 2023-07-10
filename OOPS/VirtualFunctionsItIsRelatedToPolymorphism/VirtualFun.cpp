//in array of objectes using pointer we have seen how base class pointer always calls base class method 
//even though it points to its base class (it is due to late binding)
//if we want to use derived class function we use this virtual function then
#include<bits\stdc++.h>
using namespace std;
class Base_Class{
    public: 
        int var_base;
        virtual void display(){ // it means i want to do run time polymorphism 
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
    Base_Class obj2;
    Derived_Class obj;
    pointer = &obj;
    pointer->var_base = 6969; // we can access its members
    // pointer->var_derived = 90; //but we can not do this ?? 
    pointer->display(); // this calls derived class function now due to virtual keyword

    Derived_Class* p2;
    p2 = &obj; //can't point to parent
    p2->var_base = 100;
    p2->var_derived = 897;
    p2->display(); // base class function method overriding run time polymorphism
    return 0; 
}