class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        //2 appraoaches using count in O(n*n) time
        //and another one is using sort and binary search
        
        int n = mat.size();
        int m = mat[0].size();
        int count = 0;
        int max = INT_MIN;
        int maxI;
        //B.F.

        // for(int i = 0; i< n;i++){
        //     for(int j = 0; j < m; j++){
        //         if(mat[i][j] == 1)count++;
        //     }
        //     if(count > max){
        //         max = count;
        //         maxI = i;
        //     }
        //     count = 0;
        // } 

        //Optimized
        for(int i = 0; i< n;i++){
            sort(mat[i].begin(),mat[i].end());
            int s = 0,e = m-1;
            int mid = s + (e-s)/2;
            while(s<=e){
                if(mat[i][mid] < 1){
                    s = mid+1;
                }else{
                    e = mid-1;
                }
                mid = s+(e-s)/2;
            }
            int fpos = s;
            
            s = 0,e = m-1;
            mid = s + (e-s)/2;

            while(s<=e){
                if(mat[i][mid] <= 1){
                    s = mid + 1;
                }else{
                    e = mid-1;
                }
                mid = s+(e-s)/2;
            }
            int lpos = s-1;
            count = lpos-fpos+1;
            if(count > max){
                max = count; 
                maxI = i;
            }
            count = 0;
        }
        vector<int> ans(2);
        ans[0] = maxI;
        ans[1] = max;
        return ans;


        //optimized 2 : if 0 and 1 are only values in the array
        //top right corner appraoch
        iint i = 0,j = m-1;
        int ans = -1
        // if(arr[i][j] == 0)return -1;
        while(i < n && j >= 0){
             if(arr[i][j] == 1){
                 
                 j--;
                 ans = i;
             }else if(arr[i][j] == 0){
                 i++;
             }
        }
        
        return ans;
    }
};