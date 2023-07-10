#include<bits\stdc++.h>
using namespace std;
//method overriding
//only when methods name is same, arguments are same and inheritence is there
class Animal{
    public:
    int age; 
    void speak(){
        cout<<"Speaking\n";
    }
};
class Dog:public Animal{
    public:
    //method overriding
    //this would be known in run time
    void speak(){
        cout<<"Barking\n";
    }
};
int main(){
    Dog d1;
    d1.age = 11;
    d1.speak();
    return 0;
}