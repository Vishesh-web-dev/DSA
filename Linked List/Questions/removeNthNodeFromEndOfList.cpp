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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* slow_prev;

        while(n--){
            //here it can be nullptr at last iteration only
            fast = fast->next;
        }

        while(fast!=nullptr){
            slow_prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        //now delete slow pointer
        //if slow is first element hence their is no previous
        if(slow == head){
            head = slow->next;
        }else{
            slow_prev->next = slow->next;
        }    
        slow->next = nullptr;  
        return head;
    }
};