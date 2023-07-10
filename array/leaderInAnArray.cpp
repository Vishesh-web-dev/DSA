vector<int> superiorElements(vector<int>&a) {
    //iterate from back and keep currmax in the ans array
    //T.C. O(n) 
    vector<int> ans;
    int n = a.size();
    int currmax = a[n-1];
    ans.push_back(currmax);
    for(int i = n-2 ; i>=0 ;i--){
        if(a[i] > currmax){
            ans.push_back(a[i]);
            currmax = a[i];
        }
    }
    return ans;
}