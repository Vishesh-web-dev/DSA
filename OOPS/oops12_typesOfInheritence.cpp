#include<bits\stdc++.h>
using namespace std;
class Mother{
    public:
        void speak(){
            cout<<"speaks hindi\n";
        }
};
class Father{
    public:
        void speak(){
            cout<<"speaks english\n";
        }
};
class child:public Father,public Mother{
    // public:
    // void childSpeaks(){
    //     Father::speak();
    //     Mother::speak(); //works **** imp
    // }
};
int main(){ 
    //inheritence ambiguity
    child obj; 
    // obj.speak(); //gives error
    // obj.speak(); 
    //if both parent class has same named functions or members and we try to access them
    //in child class then it will give error ????

    //to handle it 
    obj.Father::speak(); //handled now
    obj.Mother::speak(); // :: scope resolution operator
    return 0;
}

//imp ***
// #include <iostream>

// class Base1 {
// public:
//     void display() {
//         std::cout << "Base1 display" << std::endl;
//     }
// };

// class Base2 {
// public:
//     void display() {
//         std::cout << "Base2 display" << std::endl;
//     }
// };

// class Derived : public Base1, public Base2 {
// public:
//     void displayDerived() {
//         Base1::display();  // Accessing Base1's display function
//         Base2::display();  // Accessing Base2's display function
//     }
// };

// int main() {
//     Derived d;
//     d.displayDerived();
//     return 0;
// }
