//just apply largest area in histogram appraoch for each row
//also if row element starts with 0 take it as 0 for histogram vector
//as area of maximum rectangle shold have countinuous 1's

class Solution {
private: 
    long long int rectArea(vector<int> heights){
        int n = heights.size();
        vector<int> next(n,n),prev(n,-1);
        stack<int> st,st2;

        for(int i = 0 ; i < n ; i++){
            while((!st.empty()) && heights[st.top()] > heights[i]){
                next[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        for(int i = n-1 ; i >= 0 ; i--){
            while((!st2.empty()) && heights[st2.top()] > heights[i]){
                prev[st2.top()] = i;
                st2.pop();
            }
            st2.push(i);
        }

        int maxArea = INT_MIN,area;
        for(int i = 0 ; i < n ; i++){
            area = heights[i]*(next[i] - prev[i]-1);
            maxArea = max(area,maxArea);
        }

        return maxArea;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> nums(col,0);
        long long int ans = INT_MIN;
        
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j] == '0'){
                    nums[j] = 0;
                }else{
                    nums[j]++;
                }
            }
            ans = max(ans,rectArea(nums));
        }
        
        return ans;
    }
};