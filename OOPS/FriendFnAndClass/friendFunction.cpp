#include<bits\stdc++.h>
using namespace std;
class Complex{
    int a;
    int b;
    public:
        friend Complex sumComplex(Complex ob1, Complex ob2); //can be declared in private as well
        void setNumber(int a,int b){
            this->a = a;
            this-> b = b;
        }
        void printNumber(){
            cout<<"Your Number is: "<<(this->a) <<" + "<<(this->b)<<"i\n";
        }
};

Complex sumComplex(Complex ob1,Complex ob2){
    Complex ob3;
    ob3.setNumber(ob1.a+ob2.a,ob1.a+ob2.b); //error can't acces privete members if not friend
    return ob3;
}

int main(){
    Complex c1,c2;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();

    Complex c3 = sumComplex(c1,c2); //here sumComplex is a friend function of class complex
    //it can acces all its public,private members also it is not a part of the class itsel
    //in other words it is not the memeber function of the class
    // read theory 
    /*1.Not in the scope of the class
     2. since it is not in t he scope of the class. it cannot be called from the 
        object of that class. c1.sumComplex() == error(invalid) 
     3. can be invoked without the help of any object
     4. usually contains the objects as arguments
     5. can be declared under private access modifier as well
     6. It cannot access the members directly by their names ans need object_name.member_name to access
        any member
     */ 
    c3.printNumber();

    return 0;
}