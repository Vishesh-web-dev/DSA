/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
// recursive approachgt5
    void reverse(ListNode* &prev,ListNode* curr){
        if(curr == NULL){
            return;
        }
        ListNode* forward = curr->next; //store forward address
        curr->next = prev; //reverse LL
        prev = curr; //update prev
        curr = forward; //update curr ==> new head
        reverse(prev,curr);


        //IMP***
        //or 
        // ListNode* forward = curr->next; //store forward address
        //reverse(curr,forward); //pehle cause baad mai value change ho jaegi curr ki
        // curr->next = prev ;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(prev,curr);
        return prev;
        
        
    }
};