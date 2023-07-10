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
    ListNode* middleNode(ListNode* head) {
        // int len = 0;
        // ListNode* p = head;
        // while(p != NULL){
        //     p = p->next;
        //     len++;
        // }
        // int cnt = len/2;
        // if(cnt == 0){
        //     return head;
        // }
        // while(cnt > 0){
        //     head = head->next;
        //     cnt--;
        // }
        // return head;

        //turtoise hare method
        //slow or fast pointers
        //slow moves 1 and fast moves twice when fast == null or fast->next == null return slow

        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL){
        // while(fast && fast->next){ //since NUll is a falsy value 
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};