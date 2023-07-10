class Solution {
public:
    int numberOfWords(string s){
        int cnt = 0;
        for(int i = 0 ; i < s.length(); i++){
            if(s[i] == ' '){
                cnt++;
            }
        }
        return cnt+1;
    }
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char> m1;
        unordered_map<char,string> m2;
        int i = 0;
        string temp = q"";
        for(int j = 0; j < pattern.size() ; j++){
            temp = "";
            while(i < s.length() && s[i] != ' '){
                temp.push_back(s[i]);
                i++;
            } 
            //if not present then add key value pair
            //else check if value is same as current temp
            if(m1.find(temp) == m1.end() && m2.find(pattern[j]) == m2.end()){
                m1[temp] = pattern[j];
                m2[pattern[j]] = temp;
            }else{
                if(m1[temp] != pattern[j] && m2[pattern[j]] != temp){
                    return false;
                }
            }
            i++;
        }
        if(numberOfWords(s) != pattern.length())return false;
        return true;
    }
};