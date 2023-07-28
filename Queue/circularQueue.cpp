#include<bits\stdc++.h>
using namespace std;
class queue{
    private:
        int *arr;
        int front,back,size;
        int capacity;
    public: 
        queue(int n){
            arr = new int[n];
            front = 0;
            back = 0;
            size = n;
            capacity = 0;
        }
        bool enqueue(int x){
            if(back == size){
                back = 0;
            }
            if(back == front && capacity == size){
                return false; //can't be filled more
            }
            arr[back] = x;
            back++;
            capacity++;
            return true;
        }
        int dequeue(){
            if(front == size){
                front = 0; 
            }
            if(back == front && capacity == 0){
                return -1;
            }
            int x = arr[front];
            front++;
            capacity--;
            return x;
        }
};
int main(){
    
    return 0;
}