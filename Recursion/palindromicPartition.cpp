class Solution {
private: 
    bool palindrom(string s){
        int st = 0,e = s.length()-1;
        while(st <= e){
            if(s[st++] != s[e--])return false;
        }
        return true;
    }
    // if substr from i to j is a palindrom call for each partition
    void solve(vector<vector<string>>& ans,vector<string> temp,string s,int i){
        //base case
        if(i == s.length()){
            ans.push_back(temp);
            return;
        }

        for(int j = i ; j < s.length() ; j++){
            string str = s.substr(i,j-i+1); 
            //if palindrom continue partiontioning 
            //i.e take a call for abb 
            //similary then take aa which is a palindrom and call for bb
            if(palindrom(str)){
                temp.push_back(str);
                solve(ans,temp,s,j+1);
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> temp;
        solve(ans,temp,s,0);
        return ans;
    }
};