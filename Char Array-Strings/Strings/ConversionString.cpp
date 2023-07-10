#include <bits/stdc++.h>
class Solution {
public:

    int compress(vector<char>& chars) {
        int n = chars.size();       
        
        int j = 0;
        int count;
        for(int i = 0; i<n;i++){
            count = 1;
            while(i < n-1 && chars[i] == chars[i+1]){
                count++;
                i++;
            }

            if(count > 1){
                //insert character and digit in j position
                if(count < 10){
                    chars[j++] = chars[i];
                    chars[j++] = '0' + count;
                }else{
                    chars[j++] = chars[i];
                    string s = to_string(count);
                    for(int k = 0; k < s.length(); k++){
                        chars[j++] = s[k];
                    }
                }
            }else{
                //insert element only at j and go to next 
                chars[j++] = chars[i];
            }
        }
        
        return j;
    }
};

//u can write char[j]; j++;
//or char[j++]