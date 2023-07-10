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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //good solution
        ListNode* slowA = headA;
        ListNode* fastA = headA;
        ListNode* slowB = headB;
        ListNode* fastB = headB;

        while(fastA!=nullptr && fastB!=nullptr){
            fastA = fastA->next;
            fastB = fastB->next;
        }
        while(fastA!=nullptr){
            fastA = fastA->next;
            slowA = slowA->next;
        }
        while(fastB!=nullptr){
            fastB = fastB->next;
            slowB = slowB->next;
        }
        while(slowA!=nullptr){
            if(slowA == slowB){
                return slowA;
            }
            slowA = slowA->next;
            slowB = slowB->next;
        }
        return slowA;

    }
};