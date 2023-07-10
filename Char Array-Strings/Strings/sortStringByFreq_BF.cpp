class Solution {
public: 
    static bool comp(pair<char,int> p1,pair<char,int> p2){
        if(p1.second > p2.second){
            return true;
        }else if(p1.second < p2.second){
            return false;
        }else{
            if(p1.first > p2.first){
                return true;
            }else{
                return false;
            }
        }
    }   
public:

    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(int i = 0 ; i < s.length() ; i++){
            mpp[s[i]]++;
        }
        sort(mpp.begin(),mpp.end(),comp);
        string ans;
        for(auto i :mpp){
            for(int j = 0; j < i.second;j++){
                ans += i.first;
            }
        }
        return ans;
    }
};