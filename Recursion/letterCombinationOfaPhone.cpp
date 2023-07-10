class Solution {
public:
    void solve(vector<string>& ans,string digits,string mapping[],string output,int i){
        if(i == digits.length()){
            if(digits.length() == 0){
                return;
            }
            ans.push_back(output);
            return;
        }
        int mapValue = digits[i] - '0' - 2;
        //ab ek baar a ko add karenge fir uske liye call
        //fir b ko add kareng 
        for(int j = 0; j < mapping[mapValue].size();j++){
            output += mapping[mapValue][j];
            solve(ans,digits,mapping,output,i+1);
            output.pop_back();//vvimp --> backtracking 
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string mapping[8] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output = ""; //add string to ans when each recusive call ends
        solve(ans,digits,mapping,output,0);
        return ans;
    }
};