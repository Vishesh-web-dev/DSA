class Solution {
public:

    vector<int> nextLargerNodes(ListNode* head) {
        //stack problem
        vector<int> res;
        ListNode* curr = head;
        while(curr!=nullptr){
            res.push_back(curr->val);
            curr = curr->next;
        }
        vector<int> ans(res.size(),0);
        stack<int> st;
        for(int i = 0 ; i < res.size() ; i++){
            while(!st.empty() && res[st.top()] < res[i]){
                ans[st.top()] = res[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};