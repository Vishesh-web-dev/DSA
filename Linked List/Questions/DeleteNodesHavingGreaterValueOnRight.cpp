//imp problem tough to think
//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{   private:
    Node* rev(Node* head){
        Node* prev = nullptr;
        Node* curr = head;
        Node* forward;
        while(curr!=nullptr){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    public:
    Node *compute(Node *head)
    {
        // your code goes here
       head = rev(head);
       //ab jo bhi curr max se chota ho vo delete hoga
       int currMax = head->data;
       Node* curr = head->next;
       Node* prev = head;
       Node* forward;
       while(curr!=nullptr){
           forward = curr->next;
           if(curr->data < currMax){
               //delete
               prev->next = forward;
               curr->next = nullptr;
           }else{
               //update curr max
               currMax = curr->data;
               prev = curr;
           }
           curr = forward;
       }
       head = rev(head);
       return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends