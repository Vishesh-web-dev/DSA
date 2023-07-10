class Solution {
public:
    string removeDuplicates(string s) {
        //Brute Force
        // int flag;
        //  while(true){
        //      flag = 0;
        //      for(int i = s.length() -1 ; i > 0;i--){
        //          if(s[i] == s[i-1]){
        //              s.erase(i-1,2);
        //              flag = 1;
        //          }
        //      }
        //      if(flag == 0){
        //          break;
        //      }
        //  }
        //  return s;

         //stack solution exits which is easy to implement think of it
         //push and compare with recent pushed if same pop it 
         //and change curr to curr top element else push the element into the stack
        stack<char> st;
        st.push(s[0]);
        for(int i = 1 ; i < s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top() == s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans = "";
        while (!st.empty()) {
          ans += st.top();
          st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};