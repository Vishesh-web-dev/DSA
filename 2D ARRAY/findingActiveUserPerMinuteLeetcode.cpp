class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>> mpp;
        vector<int> ans(k,0);
        for(int i = 0 ; i < logs.size() ; i++){
            int id = logs[i][0];
            int time = logs[i][1];
            mpp[id].insert(time);/*remember*/
        }
        for(auto i : mpp){
            int times = i.second.size() - 1;
            ans[times]++;
        }        
        return ans;
    }
};