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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr){
            return list1;
        }
        if(list2 == nullptr){
            return list1;
        }
        if(list1 == nullptr){
            return list2;
        }
        ListNode* head = list1;
        //for first element
        ListNode* prev1;
        ListNode* forward2;
        if(list1->val >= list2->val){
            //insert
            forward2 = list2->next;
            list2->next = list1;
            head = list2; //update 2
            list2 = forward2;
        }
        prev1 = head;
        //now if l1 >= l2 insert between prev and l1
        while(list1!=NULL && list2!=NULL){
            if(list1->val >= list2->val){
                forward2 = list2->next;
                prev1->next = list2;
                list2->next = list1;
                prev1 = list2;
                list2 = forward2;
            }else{
                prev1 = list1;
                list1 = list1->next;
            }
        }
        
        if(list2!=NULL){
            // bachi kuch ko jodh do bss
            prev1->next = list2;
        }
        return head;
    }
};