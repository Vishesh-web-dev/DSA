#include<bits\stdc++.h>
using namespace std;
class ABC{
    public:
    int a;
    int b;
    int add(){
        return a+b;
    }
    
    void operator +(ABC &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<<"Output "<<val1-val2<<endl;
    }

    //binary operator hence need to pass another object
    void operator *(ABC &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<<"Output: "<<val1/val2<<endl;
    }

    //unary
    void operator() (){
        cout<<"Main Bracket Hu "<<this->a<<endl;
    }

    //uarny
    void operator <<= (ABC &obj){
        cout<<"Main 10 print krta hu ab bhai: "<<10<<endl;
    }
};
int main(){
    ABC obj1;
    ABC obj2;
    obj1.a = 55;
    obj2.a = 22;
    obj1+obj1;
    obj1*obj2;
    obj1();
    obj1<<=obj2;
    return 0;
}

//ex
// This is automatically called when '+' is used with 
// between two Complex objects 
//example ==> 

// class Complex { 
// private: 
//     int real, imag; 
// public:
//     Complex(int r = 0, int i = 0) 
//     {   real = r; 
//         imag = i;  
//     }
//     Complex operator + (Complex const & b) 
//     { 
//         Complex a;
//         a.real = real + b.real; 
//         a.imag = imag + b.imag; 
//         return a; 
//     }

//     void print() 
//     {
//         cout << real << " + i" << imag << endl; 
//     }
// };
// int main() 
// { 
//     Complex c1(10, 5), c2(2, 4); 
//     Complex c3 = c1 + c2; // An example call to "operator+" 
//     c3.print(); 
// }