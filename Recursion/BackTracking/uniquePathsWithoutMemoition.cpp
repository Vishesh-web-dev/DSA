class Solution {
    int solve(int m,int n,int i,int j){
        if(i == m-1 && j == n-1){
            return 1;
        }
        int right = 0,bottom = 0;
        if(i < m){
            right = solve(m,n,i+1,j);
        }
        if(j < n){
            bottom = solve(m,n,i,j+1);
        }
        return right+bottom;
    }
public:
    int uniquePaths(int m, int n) {
        int i = 0, j =0;
        return solve(m,n,i,j);
    }
};