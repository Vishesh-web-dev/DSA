int Solution::solve(vector<int> &A, int B) {
    //take prefix
    for(int i = 1 ; i < A.size() ; i++){
        A[i]^=A[i-1];
    }
    //forward mapping //and cnt its occurence if found its pair in the map
    unordered_map<int,int> mpp;
    int cnt = 0;
    for(int i = 0 ; i < A.size() ; i++){
        if(A[i] == B)cnt++;
        if(mpp.find(A[i]^B) != mpp.end()){
            cnt += mpp[A[i]^B];
        }
        mpp[A[i]]++;
    }
    return cnt;
}
