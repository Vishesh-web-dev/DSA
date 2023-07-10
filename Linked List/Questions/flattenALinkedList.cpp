//{ Driver Code Starts
#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}

// } Driver Code Ends


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node* merge(Node* p1, Node* p2){
    Node* returnVal = p1;
    Node* prev = NULL;
    Node* forward;
    while(p1!=NULL && p2!=NULL){
        forward = p2->bottom;
        if(p2->data < p1->data){
            if(prev == NULL){
                p2->bottom = NULL;
                p2->bottom = p1;
                returnVal = p2;
                prev = p2;
                p2 = forward;
            }else{
                p2->bottom = NULL;
                prev->bottom = p2;
                p2->bottom = p1;
                prev = p2;
                p2 = forward;
            }
        }else{
            prev = p1;
            p1 = p1->bottom;
        }
    }
    if(p2!=NULL){
        prev->bottom = p2;
    }
    return returnVal;
}
Node *flatten(Node *root)
{
   // Your code here
   if(root == NULL || root->next == NULL){
       return root;
   }
   Node* part1 = root;
   Node* part2 = root->next;
   Node* forward;
   while(part2!=NULL){
       forward = part2->next;
       part1->next = NULL;
       part1 = merge(part1,part2);
       part1->next = forward;
       part2 = forward;
   }
   root = part1;
   return root;
}

