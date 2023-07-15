#include<iostream>
using namespace std;
class stack{
    int *arr;
    int size;
    int top;
public:
    stack(int size){
        this->size = size;
        arr = new int[size]; //memory allocation
        top = -1;
    };
    void push(int a){
        if(top >= size-1){
            cout<<"stack overflow\n";
            return;    
        };
        top++;
        arr[top] = a;
    }
    void pop(){
        if(top == -1){
            cout<<"stack underflow\n";
            return;
        }
        top--;
    }
    int peek(){
        if(top == -1){
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return (top == -1);
    }
};
int main(){
    stack s1(3); //n sized stack
    s1.push(10);
    s1.push(40);
    s1.push(80);
    // s1.push(40); //stack overflow
    cout<<s1.peek()<<endl;
    cout<<s1.empty()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.empty()<<endl;
    return 0;
}