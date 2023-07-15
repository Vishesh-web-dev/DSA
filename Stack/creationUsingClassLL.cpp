#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
 
    node(int data){
        this->data = data;
        this->next = nullptr;
    }    
};
class stack{
    node* top;
public: 
    stack(){
        top = nullptr;
    }
    void push(int data){
        node* temp = new node(data);
        if(top == nullptr){
            top = temp;
            return;
        }
        temp->next = top;
        top = temp;
    }
    void pop() {
        if(top==NULL)
            cout<<"Stack Underflow"<<endl;
        else {
            node* temp = top;
            top = top->next;
            temp->next = nullptr;
            delete temp;
        }
    }
    int peek(){
        if(top == nullptr){
            return -1;
        }
        return top->data;
    }
    bool empty(){
        return (top == nullptr);
    }
};
int main(){
    stack s1;
    s1.push(100);
    s1.push(90);
    s1.push(40);
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<s1.empty();
    return 0;
}