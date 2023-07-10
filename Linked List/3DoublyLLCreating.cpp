#include<bits\stdc++.h>
using namespace std;
//Doubly Linked List
class node{
    public:
        int data;
        node* next;
        node* prev;
        node(){
            this->data = 0;
            next = NULL;
            prev = NULL;
        }
        node(int data){
            this->data = data;
            next = NULL;
            prev = NULL;
        }
};
int main(){
    node* node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;   
    cout<<node1->prev<<endl;   
    return 0;
}