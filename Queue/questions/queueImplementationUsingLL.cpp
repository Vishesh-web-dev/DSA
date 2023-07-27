#include <bits\stdc++.h> 
using namespace std;
class node{
    public: 
        int data;
        node* next;
        node(int data){
            this->data = data;
            next = nullptr;
        }
};
class Queue {
    node* first;
    node* back;
public:
    Queue() {
        // Implement the Constructor
        first = nullptr;
        back = nullptr;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return first == nullptr;
    }

    void enqueue(int data) {
        node* temp = new node(data);
        // Implement the enqueue() function
        if(first == nullptr){
            first = temp;
            back = temp;
        }else{
            back->next = temp;
            back = temp;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;    
        }
        
        int val = first->data; //store value
        node* temp = first;
        first = first->next; //update first
        
        //if first is last element update back as well
        if(first == nullptr){
            back = nullptr;
        }
        
        //delete
        temp->next = nullptr;
        delete temp;
        
        return val;
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
        // Implement the front() function
        return first->data;
    }
};
int main(){
    Queue q1;
    q1.enqueue(15);
    q1.enqueue(55);
    q1.enqueue(27);
    cout<<"popped element: "<<q1.dequeue()<<endl; //removes 15
    cout<<"Front: "<<q1.front();
    return 0;
}