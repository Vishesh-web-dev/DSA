#include <bits\stdc++.h> 
using namespace std;

class Queue {
    int *arr;
    int first,back;
public:
    Queue() {
        // Implement the Constructor
        arr = new int[10];
        first = 0;
        back = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return (first == back);
    }

    void enqueue(int data) {
        if(back == 11){
            cout<<"Queue Overflow\n";
        }
        arr[back] = data;
        back++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;
        }else{
            int x = arr[first];
            first++;
            if(first == back){
                first = 0;
                back = 0;
            }
            return x;
        }
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
        // Implement the front() function
        return arr[first];
    }

    int size(){
        return back-first;
    }
};

int main(){
    Queue q1;
    q1.enqueue(15);
    q1.enqueue(55);
    q1.enqueue(27);
    cout<<"popped element: "<<q1.dequeue()<<endl; //removes 15
    cout<<"Size: "<<q1.size()<<endl;
    cout<<"Front: "<<q1.front();
    return 0;
}