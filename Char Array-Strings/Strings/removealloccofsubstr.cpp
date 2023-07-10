//approach 1: O(n^2) AND O(1)
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pLen = part.length();
        int i = 0;
        int ans = 0;
        while(i <= s.length() - pLen && s.length() >= pLen){
            if(s.substr(i,pLen) == part){
                s.erase(i,pLen);
                i = 0;
            }else{
                i++;
            }
        }
        return s;
    }
};