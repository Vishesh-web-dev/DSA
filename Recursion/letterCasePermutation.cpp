class Solution {
public:
    void solve(vector<string>& ans,string temp,string s,int i)
    {
        if(i >= s.length()){
            ans.push_back(temp);
            return;
        }

        if(s[i] >= '0' && s[i] <= '9'){
            temp.push_back(s[i]);
            solve(ans,temp,s,i+1);
        }
        
        //exclude
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            temp.push_back(s[i]);
            solve(ans,temp,s,i+1);
            temp.pop_back(); //backtrack
        }

        //include
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 'a' + 'A';
            temp.push_back(s[i]);
            solve(ans,temp,s,i+1);
        }else if((s[i] >= 'A' && s[i] <= 'Z')){
            s[i] = s[i] - 'A' + 'a';
            temp.push_back(s[i]);
            solve(ans,temp,s,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp;
        int i = 0;
        solve(ans,temp,s,i);
        return ans;
    }
};