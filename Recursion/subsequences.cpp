#include <bits/stdc++.h> 
void solve(vector<string>& ans,string str,string res,int i){
	if(i == str.length()){
		if(res != ""){
			ans.push_back(res);
		}
		
		return;
	}
	//exclude
	solve(ans,str,res,i+1);
	//include
	res += str[i];
	solve(ans,str,res,i+1);
}

vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string res = "";
	solve(ans,str,res,0);
	return ans;

}
