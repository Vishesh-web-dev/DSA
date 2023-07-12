//leetcode shuffle string 
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        //with extra memory
        // string temp(s.length(),'x');
        // for(int i = 0 ; i < indices.size() ; i++){
        //     temp[indices[i]] = s[i];
        // }
        // return temp;

        //without extra memeory cyclic sort
        int i = 0;
        while(i != s.length()){
            if(i == indices[i]){
                i++;
            }else{
                swap(s[i],s[indices[i]]);
                swap(indices[i],indices[indices[i]]);
            }
        }
        return s;
    }
};