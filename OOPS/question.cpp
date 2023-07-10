//see more at codestudio guided paths
#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    int real;
    int img;
    public:
    ComplexNumbers(int real,int img){
        this->real = real;
        this->img = img;
    }
    void plus(ComplexNumbers &temp){
        this->real += temp.real;
        this->img += temp.img;
    } 
    void multiply(ComplexNumbers &temp){
        int tempReal = this->real;  // Store the original value of this->real
        this->real = (this->real * temp.real) - (this->img * temp.img);
        this->img = (tempReal * temp.img) + (this->img * temp.real);
    } 
    void print(){
        if(img >= 0){
            cout<<(this->real);
            cout<<" + i";
            cout<<(this->img);
            cout<<'\n';
        }else{
            cout<< (this->real);
            cout<< " - i";
            cout<<abs(this->img);
            cout<<'\n';
        }
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }
}
