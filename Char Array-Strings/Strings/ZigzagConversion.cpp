class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> mat(numRows,"");
        //traverse up and down on mat and insert s[i]
        int i = 0;
        while(i < s.length()){
            //go down
            for(int j  = 0 ; j < numRows ;j++){
                if(i >= s.length()){
                    break;
                }
                mat[j]+=s[i++];
            }
            //go up from n-2 to 1 index
            for(int j = numRows-2 ; j >= 1 ; j--){
                if(i >= s.length()){
                    break;
                }
                mat[j]+=s[i++];
            } 
        }
        string ans = "";
        for(int i = 0 ; i < numRows ;i++){
            ans += mat[i];
        }
        return ans;
    }
};