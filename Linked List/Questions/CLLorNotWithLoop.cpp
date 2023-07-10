#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
    // Write your code here.
    //zero element
    if(head == NULL){
       return true;
   }
   //one element and not CLL
   if(head->next == NULL){
       return false;
   }
   //more than one elements
   Node* slow = head;
   Node* fast = head;
   while(fast!= NULL && fast->next != NULL){
       slow = slow->next;
       fast = fast->next->next;
       if(fast == slow){
           break;
       }
   }
   if(slow == head){
       return true;
   }
   return false;
}
