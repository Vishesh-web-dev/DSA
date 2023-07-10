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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1_head = l1;
        ListNode* l1_prev;
        ListNode* l2_forward;
        int carry = 0,data;
        while(l1!= NULL &&  l2 != NULL){
            data = ((l1->val) + (l2->val) + carry)%10;
            carry = ((l1->val) + (l2->val) + carry)/10;
            l1->val = data;
            l1_prev = l1;
            l1 = l1->next;
            l2 = l2->next; 
        }
        while(l1 != NULL){
            data = (l1->val+carry)%10;
            carry = (l1->val+carry)/10;
            l1->val = data;
            l1_prev = l1;
            l1=l1->next;
        }
        //if l2 > l1
        while(l2 != NULL){
            data = (l2->val+carry)%10;
            carry = (l2->val+carry)/10;
            l2_forward = l2->next;
            l2->val = data;
            l2->next = NULL;
            l1_prev->next = l2;
            l1_prev = l2;
            l2 = l2_forward;
        }
        if(carry == 1){
            //add new node at the end of l1
            ListNode* temp = new ListNode(1);
            l1_prev->next = temp;
        }
        return l1_head;
    }
};
/*
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int c = 0;
    ListNode newHead(0);
    ListNode *t = &newHead;
    while(c || l1 || l2) {
        c += (l1? l1->val : 0) + (l2? l2->val : 0);
        t->next = new ListNode(c%10);
        t = t->next;
        c /= 10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    return newHead.next;
}
*/