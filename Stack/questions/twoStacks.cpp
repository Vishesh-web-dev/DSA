#include <bits/stdc++.h> 
class TwoStack {
    int top1;
    int top2;
    int *arr;
    int n;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this->n = s;
        top1 = -1;
        top2 = n;
        arr = new int[n];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2-top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(top2-top1 > 1){
            top2--;
            arr[top2] = num;
        }
        
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1 == -1){
            return -1;
        }
        int x = top1--;
        return arr[x];
        
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(top2 == n){
            return -1;
        }
        int x = top2++;
        return arr[x];
    }
};
