class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(); // row length
        int n = mat[0].size(); //col length
        vector<vector<int>> p(m+1,vector<int>(n+1,0));
        //prefix matrix
        for(int i = 1 ; i <= m ; i++){
            for(int j = 1 ; j <= n ;j++){
                p[i][j] = mat[i-1][j-1] + p[i-1][j] + p[i][j-1] - p[i-1][j-1];
            }
        }
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i = 0 ; i< m ;i++){
            for(int j = 0 ; j< n; j++){
                //queries
                int a = i-k,b = j-k;
                int c = i+k,d = j+k;
                //now fix ranges
                if(a<0){a = 0;}
                if(b<0){b = 0;}
                if(c>=m){c = m-1;}
                if(d>=n){d = n-1;}
                //now we just need to find range sum using prefix mat
                //inclusion and exclusion principle
                ans[i][j] = p[c+1][d+1] - p[c+1][b] - p[a][d+1] + p[a][b];
            }
        }
        return ans;
    }
};