#include<bits\stdc++.h>
using namespace std;
class hero
{
   //can't accessable by objects directly 
private:
    int a;
    int b;
    //can be accessed by objects diretly
public:
    void sum(){
        //this keyword access the variables of this class
        // cout<<this->a + this->b;
        // or
        cout<<"Sum: "<<a+b<<"\n";
    }
    void sub(); // Declaration of the sub() function
    // using special member intializer list
    hero(int a,int b):a(a),b(b){};
    // or
    // hero(int a,int b){
    //     this->a = a;
    //     this->b = b;
    // }
    
    hero(){
        cout<<"Tarun Object Created which is a instance of Class hero\n";
    }
};

// Definition of sub() function using scope resolution operator ::
void hero::sub()
{
    cout << "Subtraction: " << a - b << endl;
}

int main(){
    // hero vishesh = hero(123123,321321);
// or
    //parameterized constructor
    hero vishesh(56,44);
    //similar to
    // vector<int> v(62,0);

    //default constructor
    hero tarun;
    vishesh.sum();
    vishesh.sub();
    return 0;
}


/*The line (int a, int b):a(a),b(b) is a member initializer list in C++. 
It is used in the constructor of a class to initialize the member variables of that class.

Let's break down the line (int a, int b):a(a),b(b):

(int a, int b) specifies the constructor's parameter list.
Here, the constructor takes two integer parameters a and b.:a(a),b(b) is the member initializer list.
It follows the parameter list and initializes the member variables of the class.
In this case, a(a) initializes the member variable a of the class with the value of the parameter a,
and b(b) initializes the member variable b with 
the value of the parameter b.

By using the member initializer list, 
you can directly assign the constructor parameters to the corresponding
member variables without having to use assignment statements in the constructor body.
It is considered a good practice as it can improve performance
and prevent potential issues with uninitialized variables.*/