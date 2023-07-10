#include<bits/stdc++.h>
void solve(vector<string>& ans,string str,string output,int i){
    if(i == str.length()){
        ans.push_back(output);
        // ans.push_back(str); for 2 way
        return;
    }

    for(int j = i; j < str.length(); j++){
        swap(str[i],str[j]); //fixing different character at ith place
        output+=str[i]; //adding that character
        solve(ans,str,output,i+1); //calling for rest of the string
        output.pop_back(); //imp when back tracking
    }

    // //way  2 here we dont need to pass output 
    // for(int j = i;j<str.length();j++){
    //     swap(str[i],str[j]);
    //     solve(ans,str,i+1);
    //     swap(str[j],str[i]);
    // }
}

vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    string output;
    int i = 0;
    solve(ans,str,output,i);
    sort(ans.begin(),ans.end());
    return ans;
}