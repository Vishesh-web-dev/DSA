class Solution {
private: 
    void reverse(string &res){
        int s = 0, e = res.length()-1;
        while(s < e){
            swap(res[s],res[e]);
            s++;
            e--;
        }
    }
public:
    string removeStars(string s) {
        //can be solved using 2 ptr's
        stack<char> st;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '*'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        string res;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res);
        return res;
    }
};