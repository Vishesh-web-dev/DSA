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
 //check prv submission
class Solution {
public:
    ListNode* rev(ListNode* head){
        //NULL OR LAST 
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* forward = second->next; //store
        second->next = first;
        first->next = rev(forward);
        return second; //new head
    }
    ListNode* swapPairs(ListNode* head) {
        //ek ko swap kr dunga updated head return kr dunga aur jod dunga
        //zero or one element
        if(head == NULL || head->next == NULL){
            return head;
        }
        return rev(head);
    }
};