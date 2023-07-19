#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    //if no operater between () then false;
    for(int i = 0; i < s.length() ; i++){
        if(s[i] == '(' || s[i]=='+' || s[i] == '*' || s[i] == '-' || s[i] == '/'){
            st.push(s[i]);
        } else if(s[i] == ')'){
            if(st.top() == '('){
                return true;
            }else{
                // remove all till (
                while((!st.empty()) && st.top() != '('){
                    st.pop();
                }
                st.pop();
            }
        }
    }
    return false;
}
