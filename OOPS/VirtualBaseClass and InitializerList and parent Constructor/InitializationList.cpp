#include<bits\stdc++.h>
using namespace std;
class Initialize{
    int a,b,c;
    public:
    Initialize(){
        cout<<"Simple Constructor called\n";
    }
    //Initializer List 
    //try to initialize them which is written first good practise 
    Initialize(int a,int b,int c):a(a),c(c),b(b+a+c){
        cout<<this->a<<" "<<this->b<<" "<<this->c<<endl;
    }

    // we can use variable which is initilaized first ***
    //example
    //case 1. Initialize(int num1,int num2):a(num1),b(num2+a); //valid

    //case 2. 
    // Initialize(int num1,int num2):a(b),b(num1){ //garbage value cause b is not intialized yet
    //     cout<<a<<" "<<b<<" "<<endl;
    // } //error garbage value

    //case 3.
    // Initialize(int num1,int num2):b(num1),a(num2 + b){ //garbage value cause b is written after a
    //     cout<<a<<" "<<b<<" "<<endl;
    // } //error garbage value


    //error cause only constructors can take member intializers
    
    // void setA(int a):a(a){
    //     cout<<this->a<<endl;
    // }
};
// class :public {};
int main(){
    Initialize obj1(1,2);
    return 0;
}