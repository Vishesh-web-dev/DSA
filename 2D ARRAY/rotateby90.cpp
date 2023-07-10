class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //appraoch 1: 
        //some if statement issue 

        //    int row_st = 0,col_st = 0;
    //    int row_en = matrix.size()-1;
    //    int col_en = matrix[0].size()-1;

    //    while(row_st <= row_en && col_st <= col_en){

    //        for(int i= col_st;i <= col_en-1;i++){
    //             //1st
    //             if(row_st+i > row_en && col_st +i > col_en )break; 
    //             int curr = matrix[row_st+i][col_en];
    //             matrix[row_st+i][col_en] = matrix[row_st][col_st+i];

    //             //2nd

    //             int temp = curr;
    //             curr = matrix[row_en][col_en-i];
    //             matrix[row_en][col_en-i] = temp;

    //             //3rd
    //             temp = curr;
    //             curr = matrix[row_en-i][col_st];
    //             matrix[row_en-i][col_st] = temp;

    //             //4th
    //             matrix[row_st][col_st+i] = curr;
    //        }
    //        row_st++;
    //        col_st++;
    //        row_en--;
    //        col_en--;
    //    }

    //approach 2:
    //swap rows to cols i.e transpose of the matrix
        int c =0,r = 0;
        int n = matrix.size();
        for(int i = r; i<n;i++){
            for(int j = c; j < n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            r++;c++;
        }
        //reverse each row
        for(int i = 0; i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};