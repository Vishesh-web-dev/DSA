//when character's are not unique. then remove all duplicates
public:
	    void solve(vector<string>& ans,string str,int i){
            if(i == str.length()){
                ans.push_back(str);
                return;
            }
            
            for(int j = i ; j < str.length(); j++){
                swap(str[i],str[j]);    
                solve(ans,str,i+1);
                swap(str[i],str[j]);
            }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    solve(ans,S,0);
		  //  since the string contains same characters we remove duplicates                            
             unordered_map<string,int> m;
		    for(int i = 0 ; i < ans.size() ;i++){
		           m[ans[i]]++;
		    }
		    vector<string> original; 
		    for(auto i : m){
		        original.push_back(i.first);
		    }
		    sort(original.begin(),original.end());
		    return original;
		}