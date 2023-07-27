#include <bits/stdc++.h> 
class NStack
{
    int *top;
    int *next; //next free spot + next top if top is removed
    int *arr;
    int freespot;
public:
     NStack(int N, int S)
    {
        top = new int[N];
        next = new int[S];
        arr = new int[S];
        //initialize freespot
        freespot = 0;

        //initialize top
        for(int i = 0 ; i < N ; i++){
            top[i] = -1;
        }

        //initialize next
        for(int i = 0 ; i < S ; i++){
            next[i] = i+1;
        }
        next[S-1] = -1;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //check for overflow
        if(freespot == -1){
            return false;
        }

        //create index
        int idx = freespot;

        //insert x at index in array
        arr[idx] = x;
        
        //update freespot
        freespot = next[idx];

        //update next
        next[idx] = top[m-1];

        //update top
        top[m-1] = idx;

        //return true
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //check for underflow
        if(top[m-1] == -1){
            return -1;
        }

        //initialize index
        int idx = top[m-1];

        //update top
        top[m-1] = next[idx];

        //update next //at given index for next update freeIdx of prev
        next[idx] = freespot;

        // new freespot ==> removed index actually
        freespot = idx;

        //return popped value
        return arr[idx];
    }
};