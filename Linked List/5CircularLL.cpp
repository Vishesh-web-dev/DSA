#include<bits\stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        if(this->next != NULL){
            delete next;
            next = NULL;
            cout<<"YES";
        }
    }
};
void insertNode(node* &tail,int elem ,int data){
    //when list is empty
    if(tail == NULL){
        node* temp = new node(data);
        tail = temp;
        temp->next = temp; // or tail khud ko he point kara le
    }else{
        node* curr = tail;
        while (curr->data != elem)
        {
            curr = curr->next;
        }
        // now my curr repersents whose data is elem 
        node* temp = new node(data);
        //beech mai ghusa de 
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node* &tail){
    
    node* p = tail;
    if(tail == NULL){
        cout<<"Empty list\n";
    }
    //jab tk print kr tab tk wapas na pochoch jae ussi position mai
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p != tail);
    
    cout<<endl;
}
void deleteNode(node* &tail , int elem){ 
    node* prev = tail;
    node* curr = prev->next;
    //if 0 element
    if(tail == NULL){
        cout<<"No element present in the LL \n";
        return;
    }
    
    while(curr->data != elem){
        prev = curr;
        curr = curr->next;
    }
    //if one element
    if(prev == curr){
        tail = NULL; //update tail
    }
    if(tail == curr){
        tail = prev; //update tail
    }
    prev->next = curr->next;
    curr->next = NULL; //delete curr even in the case of 1 element
    delete curr;
}
int main(){
    node* tail = NULL; //we need to to do operation on this CLL it can be head/tail/or any
    insertNode(tail,-1,10);
    print(tail);
    
    insertNode(tail,10,20);
    print(tail);

    insertNode(tail,10,60);
    print(tail);

    insertNode(tail,60,80);
    print(tail);

    insertNode(tail,20,90);
    print(tail);
    // cout<<tail->data<<endl;

    // deleteNode(tail,20);
    deleteNode(tail,10);
    print(tail);
    deleteNode(tail,20);
    print(tail);
    deleteNode(tail,60);
    print(tail);
    deleteNode(tail,80);
    print(tail);
    deleteNode(tail,90);
    print(tail); //empty 
    return 0;
}