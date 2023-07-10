//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{   
    private: 
        void rev(struct Node* &head){
            struct Node* prev = nullptr;
            struct Node* curr = head;
            struct Node* forward;
            while(curr!=nullptr){
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
            }
            
            head = prev;
        }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        // reverse it
        //add them 
        //reverse again
        rev(first);
        rev(second);
        struct Node* first_head = first;
        struct Node* first_prev;
        struct Node* second_forward;
        int x;
        int carry = 0;
        while(first!=nullptr && second!=nullptr){
            x = (first->data + second->data +carry)%10;
            carry = (first->data + second->data +carry)/10;
            first->data = x;
            first_prev =first;
            first = first->next;
            second= second->next;
        }

        while(first!=nullptr){
            x = (first->data + carry)%10;
            carry = (first->data + carry)/10;
            first->data = x;
            first_prev = first; //update prev
            first = first->next;
        }
        
        while(second!=nullptr){
            x = (second->data + carry)%10;
            carry = (second->data + carry)/10;
            second->data = x;
            first_prev->next = second;
            first_prev = second;
            second_forward = second->next;
            second->next = nullptr;
            second = second_forward;
        }
        if(carry == 1){
            struct Node* temp = new Node(1);
            first_prev->next = temp;
        }
        
        rev(first_head);
        return first_head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends