//mine appraoach refer copy for understanding 
class Solution {
public:
    string reverseWords(string s) {
        //app 1: using extra string 

        int l = s.length();
        string res = "";
        int count = 0;
        for(int i = l - 1; i >= 0; i--){
             if(s[i] - 32 == 0){
                 res += s.substr(i+1,count);
                 if(count!=0)res+=" ";
                 count = 0;
             }else if(i == 0 && s[i]-32 != 0){
                 res += s.substr(i,count+1);
             }else{
                 count++;
             }
        }
        //remove last white space only
        int rL = res.length();
        if(res[rL-1] - 32 == 0)res = res.substr(0,rL-1);
        return res;

        //app 2 : 2 Pointer and In place.
         //reverse the string by excluding extra space 
         //then reverse each words 

        reverse(s.begin(), s.end());
        int count = 0; 
        for(int i = s.length()-1; i>=0;i--){
            if(i == 0){
                count++;
                int st = i,en = count-1;
                while(st<en){
                    swap(s[st++],s[en--]);
                }
            }else if(s[i] - 32 == 0){
                int st = i+1,en = i+count;
                while(st<en){
                    swap(s[st++],s[en--]);
                }
                count = 0;
            }else{
                count++;
            }
        }
        //trim spaces using two pointer inplace
        //skip all spaces and add one sp after every word
        int j = 0;
        int sp = 0;
        for(int i = 0 ; i< s.length();i++){
            if(s[i] -32 != 0){
                s[j] = s[i];
                j++;
            }else if(s[i] -32 == 0 && i>0 && s[i-1] -32 != 0 ){
                s[j] = ' ';
                j++;
            }else{
                sp++;
            }
        }
        //find last character and send from there
        if(s[j-1]-32 == 0){
            return s.substr(0,j-1);
        }
        return s.substr(0,j);
    }
};