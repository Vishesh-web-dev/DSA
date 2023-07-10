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
private: 
    ListNode* reverse(ListNode* head,int k,int times){
        if(times == 0){
            return head;
        }
        times = times - 1;
        if(head == NULL){
            return head;
        }
        ListNode* prev = head;
        ListNode* curr = head;
        curr = curr->next;
        ListNode* first = head;
        ListNode* forward;
        int cnt = 1;
        while(cnt != k && curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            cnt++;
        }
        first->next = reverse(curr,k,times);
        return prev;
    }
    int length(ListNode* head){
        int n = 1;
        ListNode* temp = head;
        while(temp != NULL && temp->next != NULL){
            temp = temp->next;
            n++;
        }
        return n;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //for last part to be not revered if its not multiple of k
        // we count length and then call reverse funtion exactly k times 
        int times = length(head) / k;
        ListNode* ans = reverse(head,k,times);
        return ans;
    }
};