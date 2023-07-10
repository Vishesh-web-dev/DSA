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
    int len(ListNode* head){
        int cnt = 0;
        ListNode* temp = head;
        while(temp!= nullptr){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev1;
        ListNode* prev2;
        k = k%len(head);
        if(k == 0)
            return head;
        while(k--){
            prev2 = fast;
            fast = fast->next;
        }
        while(fast!=nullptr){
            prev2 = fast;
            fast = fast->next;
            prev1 = slow;
            slow = slow->next;
        }
        prev2->next = head;
        prev1->next = nullptr;
        head = slow;
        return head;
    }
};