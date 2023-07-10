//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
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
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        rev(head);
        struct Node* curr = head;
        struct Node* prev;
        struct Node* curr_head = head;
        int x;
        int carry = 1;
        while(carry == 1 && curr!=nullptr){
            x = (curr->data + carry)%10;
            carry = (curr->data + carry)/10;
            curr->data = x;
            prev = curr;
            curr = curr->next;
        }
        if(carry == 1){
            //add new node
            struct Node* A= new Node(1);
            prev->next = A;
        }
        rev(curr_head);
        return curr_head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends