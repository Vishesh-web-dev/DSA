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
    bool isPalindrome(ListNode* head) {
        //b.f. reverse and compair O(n) + O(n)
        //optimized
        //reverse half and compair first half with other half
        //if we reverse other half we can make our code more cleaner  
        //n nodes
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = head;
        ListNode* curr = prev->next;
        ListNode* first = head;
        ListNode* forward;

        //reverse till slow and attach first to slow
        while(curr!=slow){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        first->next = slow;

        //if odd increase slow pointer by one
        //if(fast->next == nullptr) this will give error
        if(fast != nullptr){
            slow = slow->next;
        }

        //now compare
        while(slow!= NULL){
            if(prev->val != slow->val){
                return false;
            }
            prev = prev->next;
            slow = slow->next;
        }
        return true;
    }
};