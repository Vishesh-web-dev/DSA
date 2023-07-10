// here we are not removing it but skip the non alphanumeric numbers
class Solution {
public:
    bool nonalpha(char a){
        if(!((a >= 'a' && a <='z') || (a >= 'A' && a <='Z') || ((int)a >= 48 && (int)a <=57))){
                return true;
            }else{
                return false;
            }    
    }
    bool isPalindrome(string s) {
        //convert all upper alphabet to lower
        for(int i = 0; i < s.length() ;i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                 s[i] = s[i] -'A' + 'a';
            }
        }

        cout<<s;
        int st = 0,e = s.length()-1;
        while(st<e){
            if(nonalpha(s[st])){
                st++;
            }else if(nonalpha(s[e])){
                e--;
            }else if(s[st] != s[e]){
                return false;
            }else{
                st++;
                e--;
            }
        }
        return true;
    }
};