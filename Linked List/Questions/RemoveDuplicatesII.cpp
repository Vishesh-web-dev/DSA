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
    ListNode* deleteDuplicates(ListNode* head) {
        //edge cases
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        //if two elements
        if(head->next->next == nullptr){
            if(head->val == head->next->val){
                return nullptr;
            }else{
                return head;
            }
        }
        //increase curr till curr->next->data is different
        ListNode* dummy = new ListNode(-1); //prev prev
        dummy->next = head;
        ListNode* prev = head;
        ListNode* curr = prev->next;
        ListNode* forward;
        head = dummy;
        int flag = 0;
        while(curr!=NULL){
            while(curr->val==prev->val){
                flag = 1;
                forward = curr->next;
                if(forward==nullptr || forward->val!=prev->val){
                    break;
                }
                curr = forward;
            }
            if(flag == 1){
                dummy->next = forward;
                curr->next = nullptr;
                if(forward == nullptr){
                    curr = nullptr;
                }else{
                    curr = forward->next;
                }
                prev = forward;
            }else{
                dummy = prev;
                prev = curr;
                curr = curr->next;
            }
            flag = 0;
        }
        dummy = nullptr;
        delete(dummy);
        return head->next;
    }
};