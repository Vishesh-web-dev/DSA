class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size()-1;
        int cols = matrix[0].size()-1;

        int r = 0,c = 0;
        while(r <= rows && c<= cols){
            for(int i = c;i<=cols;i++){
                ans.push_back(matrix[r][i]);
            }
            r++;
            if(r > rows || c >  cols){break;}
            for(int i = r;i<=rows;i++){
                ans.push_back(matrix[i][cols]);
            }
            cols--;
            if(r > rows || c >  cols){break;}
            for(int i = cols ;i >= c;i--){
                ans.push_back(matrix[rows][i]);
            }
            rows--;
            if(r > rows || c >  cols){break;}
            for(int i = rows;i >= r;i--){
                ans.push_back(matrix[i][c]);
            }
            c++;
        }
        


        return ans;
    }
}; 