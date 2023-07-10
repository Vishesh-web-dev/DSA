//caclualte frequency of s1
//create array for frequency of s2
//calculate frequecny of window...
//using sliding window decrease frequecny of i-1 index element
//  and increase frequecny of i + windowsize - 1 index element 
//and compare frequecy of s2 with s1
#include <bits/stdc++.h>
class Solution {
public:
    
    bool checkInclusion(string s1, string s2){
        if(s2.length() < s1.length()){
            return false;
        }
         vector<int> freq(26,0);
         for(int i = 0; i< s1.length();i++){
             freq[s1[i] - 'a']++;
         }
         vector<int> freq2(26,0);
        // first window ki nikal li frequency
        for(int i = 0 ; i< s1.length();i++){
            freq2[s2.substr(0,s1.length())[i] - 'a']++;
        }
        if(freq2 == freq){
            return true;
        }
        for(int i = 1; i <s2.length() - s1.length() + 1;i++){
            freq2[s2[i-1] - 'a']--;
            freq2[s2[i-1+s1.length()] - 'a']++; 
             if(freq2 == freq){
                return true;
            }
        } 
        return false;
    }
};