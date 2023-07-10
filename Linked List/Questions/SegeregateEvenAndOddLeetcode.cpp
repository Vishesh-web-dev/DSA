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
    ListNode* oddEvenList(ListNode* head) { 
        ListNode* even_head = new ListNode(-1); //dummy node
        ListNode* odd_head = new ListNode(-1);
        ListNode* even_tail = even_head;
        ListNode* odd_tail = odd_head;

        ListNode* curr = head;
        ListNode* forward;
        int cnt = 0;
        while(curr!=NULL){
            if(cnt%2 == 0){
                forward = curr->next;
                curr->next = nullptr; //imp
                even_tail->next = curr;
                even_tail = curr;
                curr = forward;
            }else{
                forward = curr->next;
                curr->next = nullptr;
                odd_tail->next = curr;
                odd_tail = curr;
                curr = forward;
            }
            cnt++;
        }

        //merge
        even_tail->next = odd_head->next;
        head = even_head->next;

        //memory release
        even_head->next = nullptr;
        odd_head->next = nullptr;
        delete(even_head);
        delete(odd_head);

        //return
        return head;
    }
};