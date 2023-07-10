class Solution {
public:
    int firstUniqChar(string s) {
        //creat an arr 26 
        //store all freq
        //then iterate s again and check if current elem's freq is 1
        //then return it that way we don't need to store indexs

        vector<int> f(26,0);

        for(int i = 0 ; i < s.length();i++){
            f[s[i]-'a']++;
        }

        //traversing again and finding first char with 1 frequency
        for(int i = 0 ; i < s.length(); i++){
            if(f[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};