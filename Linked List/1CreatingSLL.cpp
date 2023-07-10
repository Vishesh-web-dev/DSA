#include<bits\stdc++.h>
using namespace std;
class Node{
    public: 
        int data;
        Node* next; //store address of node type 
    // Node(int data,Node *next){ //ky karunga esa bna ke pr
    //     this->data = data;
    //     this->next = next;
    // }  
        //default Constructor
        Node(){
            this->data = 0;
            this->next = NULL;
        } 
        
        //parameterized Constructor 
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
int main(){
    //creation
    Node* first = new Node(10);
    cout<<first->data<<endl;
    cout<<first->next<<endl;
    return 0;
}