//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
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

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // approach 1 ==> O(n^2) and O(1) for loop fix one and check how many dups and remove them
        // approach 2 ==> O(nlogn) and O(1)***(IN ll) using sorting and O(n) for removing dups
        // appraoch 3 ==> O(n) and O(n) using maps (see below solution)
        // your code goes here
        unordered_map<int,bool> m;
        Node* prev = head;
        Node* curr = prev->next;
        m[prev->data] = true;
        while(curr!=NULL){
            if(m[curr->data] == true){
                prev->next = curr->next;
                Node* temp = curr;
                temp->next = NULL;
                delete temp;
                curr = prev->next;
            }else{
                prev = curr;
                curr = curr->next;
                m[prev->data] = true;
            }
        }
        return head;
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
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
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
// } Driver Code Ends