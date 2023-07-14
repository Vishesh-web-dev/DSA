class Solution {
public:
    void solve(vector<vector<int>>& ans,vector<int> temp,int currsum,int i,vector<int> a,int k,int size){
        if(currsum > k){
            return;
        }else if(currsum == k){
            ans.push_back(temp);
            return;
        }
        
        for(int j = i ; j < size ; j++){
            int prevIndexJ = j-1;
            int nextIndexJ = j+1;
            //this will count repeated value once and if i and j are differnt
            //then it skips
            if(i != j && a[j] == a[prevIndexJ])continue;
            currsum += a[j];
            temp.push_back(a[j]);
            //pass j+1 cause this count repeated once
            solve(ans,temp,currsum,nextIndexJ,a,k,size);
            currsum -= a[j];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int currsum = 0,i = 0 , size = a.size();
        sort(candidates.begin(),candidates.end());
        solve(ans,temp,currsum,i,candidates,target,size);
        // remove same repetative elements
        return ans;
    }
};
