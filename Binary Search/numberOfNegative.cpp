class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        //O(nlogn)
        //   int count = 0;
        //   int rows = grid.size();
        //   int cols = grid[0].size();
          
        //   for(int i = 0 ; i < rows;i++){  
        //       int s = 0 ,e = cols-1;
        //       int mid = s + (e-s)/2;    
        //         while(s <= e){
		//             if(grid[i][mid] >= 0){
		// 	            s = mid+1;
		//             }else{
		// 	            e = mid-1;
		//             }
		//             mid = s + (e-s)/2;
	    //         }
        //         count += (cols-mid);
        //     }
        //   return count;

        //O(n) : optimmized top corener appraoch 
        int count = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int i = 0,j = cols-1;
        while(i < rows  && j >0){
            if(grid[i][j] < 0){
                count++;
            }else{
                i++;
                continue;
            }

            //movement 
            if(grid[i][j-1]  < 0){
                j--;
                count += rows-i-1;
            }else{
                i++;
            }
        }
        if(i < rows && grid[i][0] < 0){
            count+=rows-i;
        }
        return count;
    }
};