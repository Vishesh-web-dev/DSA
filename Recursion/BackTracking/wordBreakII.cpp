class Solution {
    bool isWord(string s,unordered_set<string> st){
        if(st.find(s)==st.end()){
            return false;
        }
        return true;
    }
    void solve(vector<string>& ans,string temp,string s,unordered_set<string> st,int i){
        if(i == s.length()){
            temp.pop_back();
            ans.push_back(temp);
            return;
        }
        for(int j = i ; j < s.length() ; j++){
            string res = s.substr(i,j-i+1);
            if(isWord(res,st)){
                int prevlen = temp.size();
                temp += res + " ";
                solve(ans,temp,s,st,j+1);
                temp = temp.substr(0,prevlen);
            }
        }
    }
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        //just like palindromic partitioning problem
        //check if res is a word then only dfs
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        vector<string> ans;
        string temp;
        int i = 0;
        solve(ans,temp,s,st,i);
        return ans;
    }
};