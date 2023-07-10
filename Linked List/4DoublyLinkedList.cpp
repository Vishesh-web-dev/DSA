#include<bits/stdc++.h>
using namespace std;

//Doubly Linked List
class node{
    public:
        int data;
        node* next;
        node* prev;
        node(){
            this->data = 0;
            this->next = NULL;
            this->prev = NULL;
        }
        node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
        ~node(){};
};

//insert at head
void insertAtHead(node* &head,node* &tail,int data){
    if(head == NULL){
        node* temp = new node(data);
        head = temp; 
        tail = temp;
        return;
    }
    node* temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//insert at tail
void insertAtTail(node* &head,node* &tail,int data){
     if(tail == NULL){
        node* temp = new node(data);
        tail = temp; 
        head = temp;
        return;
    }
    node* temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//insert at any pos
void insertAtpos(node* &head,node* & tail,int pos,int data){
    //
    //insert at head
    if(pos == 1){
        insertAtHead(head,tail,data);
        return;
    }
    //insert at middle as well as last
    node* i = head;
    int cnt = 1;
    while(cnt != pos-1){
        i = i->next;
        cnt++;
    }
    if(i->next == NULL){
        insertAtTail(head,tail,data);
        return;
    }

    node* temp = new node(data);
    //not able to insert at last??
    temp->prev = i;
    temp->next = i->next;
    i->next->prev = temp; //this not exist for last element
    i->next = temp;
}

//delete
void deleteNode(node* &head,node*& tail,int pos){
    int cnt = 1;
    node* p = head;
    //deleting first element
    if(pos == 1){
        head = head->next;
        head->prev = NULL;
        // memory free
        p->next = NULL;
        delete p;
        return;
    }
        // //deleting middle node or last node but not updating tail node
    while(cnt != pos-1){
        p = p->next;
        cnt++;
    }
    node* curr = p->next;
    //for last element
    if(curr->next == NULL){
        tail = p;
        p->next = NULL;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
        return;
    }
    //for middle
    p->next = curr->next;
    curr->next->prev = p;
    // memory free
    curr->next = NULL; 
    curr->prev = NULL;
    delete curr;
}

//print 
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//length
int length(node*&head){
    node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main(){
    // node* node1 = new node(10);
    node* head = NULL; //head and tail is NULL i.e List is empty
    node* tail = NULL;

    insertAtHead(head,tail,15);
    insertAtHead(head,tail,35);

    insertAtTail(head,tail,20);
    insertAtTail(head,tail,50);

    insertAtpos(head,tail,1,-40);
    insertAtpos(head,tail,4,-90);
    insertAtpos(head,tail,3,-50);


    print(head);
    cout<<length(head)<<"\n";
    cout<<"Current head: "<<head->data<<"\n";
    cout<<"Current tail: "<<tail->data<<"\n";

    //delete
    deleteNode(head,tail,1);//delete and update head
    deleteNode(head,tail,3); //middle
    deleteNode(head,tail,5);//delete and update tail

    print(head);
    cout<<length(head)<<"\n";
    cout<<"Current head: "<<head->data<<"\n";
    cout<<"Current tail: "<<tail->data<<"\n";
    return 0;
}