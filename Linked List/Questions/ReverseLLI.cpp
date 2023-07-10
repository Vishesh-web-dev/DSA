/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 **/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

         //iterative appraoch
         ListNode* curr = head;
         ListNode* prev = NULL;
         ListNode* forward;

         while(curr!= NULL){
            forward = curr->next; //forward store later use for curr upadtion
            curr->next = prev; //update curr->next / reversed it
            prev = curr; //update prev
            curr = forward; //update curr
         }
         head = prev;
         return head;
    }
};