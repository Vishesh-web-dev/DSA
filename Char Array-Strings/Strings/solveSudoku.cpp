class Solution {
public:
    bool validRowAndCol(vector<vector<char>>& board){
        for(int i = 0 ; i < 9 ; i++){
            int arr[9] = {0};
            
            for(int j = 0 ; j < 9 ; j++){
                if(board[i][j] != '.' && arr[board[i][j] - 49] == 1){
                    return false;
                }
                if(board[i][j] != '.')
                    arr[board[i][j] - 49]++; 
            }
        }
        for(int i = 0 ; i < 9 ; i++){
            int arr[9] = {0};
            for(int j = 0 ; j < 9 ; j++){
                if(board[j][i] != '.' && arr[board[j][i] - 49] == 1){
                    return false;
                }
                if(board[j][i] != '.')
                    arr[board[j][i] - 49]++;
            }
        }
        return true;
    }
    bool validSquare(vector<vector<char>>& board){
        int idx[9][2] = {{0,0},{0,3},{0,6},{3,0},{3,3},{3,6},{6,0},{6,3},{6,6}};
        for(int x = 0 ; x<9;x++){
            int i = idx[x][0], j = idx[x][1];
            int arr[9] = {0};
            for(int m = 0; m < 3 ;m++){
                for(int n = 0; n<3;n++){
                    cout<<board[i][j]<<" ";
                    if(board[i][j] != '.' && arr[board[i][j] - 49] == 1){
                        return false;
                    }
                    if(board[i][j] != '.'){
                        arr[board[i][j] - 49]++;
                    }    
                    j++;    
                }
                cout<<endl;
                j = idx[x][1];
                i++;
            }
            cout<<endl;
        }
        return true;         
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        if(validRowAndCol(board) == false)return false;
        return validSquare(board);
    }
};