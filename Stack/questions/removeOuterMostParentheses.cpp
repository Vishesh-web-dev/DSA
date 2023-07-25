class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;
        //skip very first parenteses
        for(int i = 0 ; i < s.length() ;i++){
            //empty or first (
            if(st.empty()){
                st.push('a');
            }
            //remove
            else if(st.top() == 'a' && s[i] == ')'){
                st.pop();
            }
            // add
            else if(s[i] == '('){
                ans += s[i];
                st.push(s[i]);
            }
            // remove and add it to answer cause s[i] == ')'
            else if(st.top() == '('){
                ans += s[i];
                st.pop();
            }
        }
        return ans;
    }
};