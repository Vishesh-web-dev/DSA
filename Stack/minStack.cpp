// Space Complexity: O(n) where n is the number of elements in the stack.
// Time Complexity: O(1) for all operations (push, pop, top, getMin).
class Node{
    public: 
        int data;
        int min;
        Node* next;
        Node(int data,int min){
            this->data = data;
            this->min = min;
            next = nullptr;
        }
};
class MinStack {
    Node* current;
public:
    MinStack() {    
        current = nullptr;
    }
    void push(int val) {
        Node* temp = new Node(val,val);
        if(current == nullptr){
            current = temp;
            return;
        }
        //update min till now
        if(current->min < temp->min){
            temp->min = current->min;
        }
        //update current node
        temp->next = current;
        current = temp;
    }
    void pop() {
        Node* temp = current;
        current = current->next;
        temp->next = nullptr;
        delete temp;
    }
    int top() {
        return current->data;
    }
    int getMin() {
        return current->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */