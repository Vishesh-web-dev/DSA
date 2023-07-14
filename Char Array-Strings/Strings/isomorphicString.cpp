class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1,m2;
        for(int i = 0 ; i < s.length() ;i++){
            if(m1.find(s[i])!=m1.end() && m1[s[i]] != t[i]){
                //agar pehle se store value differnt hai toh return false
                return false;
            }else{
                m1[s[i]] = t[i];
            }    
            //do for t to s mapping as well 
            if(m2.find(t[i])!=m2.end() && m2[t[i]] != s[i]){
                //agar pehle se store value differnt hai toh return false
                return false;
            }else{
                m2[t[i]] = s[i];
            }          
        }
        return true;
    }
};