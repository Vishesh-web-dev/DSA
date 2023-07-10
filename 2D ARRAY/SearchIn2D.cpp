class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //approach 1: also applied when only row is sorted
        // and last row ele of prev row is smaller then first row elem of current row 
        
        //  int st = 0;
        // int en = matrix.size() * matrix[0].size() - 1;
        // int mid = st + (en-st)/2;
        // int r = matrix.size();
        // int c = matrix[0].size();
        // while(st<= en){
        //     if(matrix[mid/c][mid%c] == target){
        //         return true;
        //     }else if(matrix[mid/c][mid%c] > target){
        //         en = mid -1; 
        //     }else{
        //         st = mid+1;
        //     }
        //     mid = st + (en-st)/2;
        // }
        // return false;

        //appraoch 2: only applied when row and col both are sorted
        //and not true=>{last row ele of prev row is smaller then first row elem of current row}
        //start from top right element 
        // and if target > row-- else col--

        int row = 0,col = matrix[0].size()-1;
        while(row <= matrix.size() - 1 &&  col >= 0){
            if(matrix[row][col] > target){
                col--;
            }else if(matrix[row][col] < target){
                row++;
            }else{
                return true;
            }
        }
        return false;
    }
};