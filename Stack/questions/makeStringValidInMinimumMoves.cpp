class Solution {
public:
    int minAddToMakeValid(string s) {
        //return stack size remainng after valid push and pop
        stack<char> st;
        for(int i = 0 ; i < s.length() ; i++){
            if((!st.empty()) && st.top() == '(' && s[i] == ')'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};