#include<bits\stdc++.h>
using namespace std;
//forward declaration
class Complex; //it says just like function that complex class exits 
class Calculator{
    public:
        int add(int a,int b){
            return a+b;
        }
        // int sumRealComplex(Complex ob1,Complex ob2){
        //     return ob1.a + ob2.a; ///error cause can't know a exits or not
        // }
        //so funciton declaration only here
        int sumRealComplex(Complex,Complex);
        int sumCompComplex(Complex,Complex);
        //error
        // int AComplex(Complex ob1,Complex ob2){
        //     return ob1.a+ob2.a;
        // }


        
};

class Complex{
    int a;
    int b;
    public:
        //INDIVIDUALLY
        // friend int Calculator:: sumRealComplex(Complex ,Complex );//friend function from class Calculator
        // friend int Calculator:: sumCompComplex(Complex ,Complex );//friend function from class Calculator
        ///above statement we have to write them reperataly to make friend if we want to create more friend function of class Calc.. 
        
        // declaring entire class as a friend
        friend class Calculator;
        void setNumber(int a,int b){
            this->a = a;
            this-> b = b;
        }
        void printNumber(){
            cout<<"Your Number is: "<<(this->a) <<" + "<<(this->b)<<"i\n";
        }
};

//function still need to do this
int Calculator::sumRealComplex(Complex ob1,Complex ob2){
    return ob1.a + ob2.a;
}
int Calculator::sumCompComplex(Complex ob1,Complex ob2){
    return ob1.b + ob2.b;
}
int main(){
    
    return 0;
}