/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        //1 with no cycle
        if(head->next == NULL){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
            //check if aage bada sakte hai ky saftly
            if(fast == NULL){
                break;
            }
            fast = fast->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};