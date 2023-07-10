/*
#include<iostream>
using namespace std;
*/

// Your code goes here
class Animal{
    protected: 
        int age;
    public:
        Animal(int age){
            this->age = age;
        }
        //virtual so that when pointer of base class when points to derived class
        //should execute the funtion of the derived class 
        virtual void Eat(){
            cout<<"Animal eats food\n";
        }
        virtual int get_Age(){
            return this->age;
        }
};
class Dog:public Animal{
    public: 
        Dog(int age):Animal(age){}
        void Eat(){
            cout<<"Dog eats meat\n";
        }
        int get_Age(){
            return age;
        }
};

class Cat:public Animal{
    public: 
        Cat(int age):Animal(age){}
        void Eat(){
            cout<<"Cat eats meat\n";
        }
        int get_Age(){
            return age;
        }
};
/*
int main()  {
   Animal *a;
   Dog dg(8); //making object of child class Dog
   Cat ct(3); //making object of child class Cat
   
   a = &dg;
   a->Eat();
   cout << "Dog's age is: "<<a->get_Age()<<endl;
   a= &ct;
   a->Eat();
   //here we need to make function of base class virtual so that it call childs funtion 
   //run time polymorhism --> checks at run time which form to choose
   cout << "Cat's age is: "<<a->get_Age()<<endl;
   return 0;
}
*/