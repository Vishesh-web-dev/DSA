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
        cout << node->data <<" "; 
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* evenh = new Node(-1);//dummy
        Node* event = evenh;
        Node* oddh = new Node(-1); //dummy
        Node* oddt = oddh;
        Node* curr = head;
        Node* forward;
        while(curr!=NULL){
            if(curr->data%2 == 0){
                //even
                forward = curr->next;
                curr->next = nullptr; //imp
                event->next = curr;
                event = curr;
                curr = forward;
            }else{
                forward = curr->next;
                curr->next = nullptr; //imp
                oddt->next = curr;
                oddt = curr;
                curr = forward;
            }
        }
        if(evenh->next == nullptr){
            //no even elements'
            head =  oddh->next;
        }else{
            event->next = oddh->next;
            head =  evenh->next;
        }
        
        evenh = nullptr;
        event = nullptr;
        oddh = nullptr;
        oddt = nullptr;
        delete evenh;
        delete oddh;
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends