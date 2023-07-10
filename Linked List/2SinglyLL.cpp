#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(){
            data = 0;
            this->next = NULL;
        }

        node(int data){
            this->data = data;
            this->next = NULL;
        }
        //destructor to free the memory
        ~node(){
            // wtf recursively deleting it means what ?? 
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }

            // delete next; //what is its meaning??????
        }
};
void insertAtHead(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(node* &tail,int data){
    node* temp  = new node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtPos(node* &head,node* &tail,int pos,int data){
    // if(insert at tail) ??
        //we need to know number of elements in a LL
        //tail bhi pass karoge and number of elements pass karoge to solve ho jaege
        // but but but 
        //we know that tail has tail->next == NULL so we can use this fact 
    // if(inset at head) ?? 
    if(pos == 1){
        //instead of calling the insertAthead we can just write the content inside below function 
        //do insert given element at head
        insertAtHead(head,data);
        return;
    }
    node* p = head;
    int cnt = 1;  //start from first position
    while (cnt != pos-1)
    {   
        p = p->next;
        cnt++;
    }
    //to insert at tail and update tail
    if(p->next == NULL){
        insertAtTail(tail,data);
        return;
    }
    node* addMe = new node(data);
    addMe->next = p->next;
    p->next = addMe;
}
//deletion
void deleteNode(node* &head,node* &tail,int pos){
    int cnt = 1;
    node* prev = head;
    //deleting first element
    if(pos == 1){
        head = head->next;
        // memory free
        prev->next = NULL;
        delete prev;
        return;
    }
        // //deleting middle node or last node but not updating tail node
    while(cnt != pos-1){
        prev = prev->next;
        cnt++;
    }
    node* curr = prev->next;
    prev->next = curr->next;

    //if last node deleting using the fact next == null for last element
    if(prev->next == NULL){
        //so update tail   
        tail = prev;
    }

    // memory free
    curr->next = NULL; 
    delete curr;
        
}
void print(node* head){
    node* p = head; //travering using by create an pointer of node type starts from head
    //now p has address of head ==> it can access its data and next
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
int main(){
    node* node1 = new node(10); //this is necessary else two LL will be created
    node* head = node1;
    node* tail = node1; //initailly both are at same place
    insertAtHead(head,15);
    insertAtHead(head,25);
    insertAtTail(tail,5);
    insertAtTail(tail,0);
    insertAtHead(head,30);
    print(head);


    //insert at any position
    insertAtPos(head,tail,1,100);
    insertAtPos(head,tail,8,-5);// we can update tail using the fact that tail->next == NULL
    insertAtPos(head,tail,4,17);
    print(head);
    cout<<"Current Head: "<<head->data<<endl;
    cout<<"Current Tail: "<<tail->data<<endl;

    // cout<<head->next->next->data; //this works

    //deletion
    //first
    deleteNode(head,tail,1);
    // print(head);
    deleteNode(head,tail,3);
    // print(head);
    deleteNode(head,tail,7); //last
    print(head);
    cout<<"Current Head: "<<head->data<<endl;
    cout<<"Current Tail: "<<tail->data<<endl; //WOULD HAVE GIVEN garbage if not taken care of
    return 0;
}