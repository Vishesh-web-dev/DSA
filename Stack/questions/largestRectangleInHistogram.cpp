//Brute Force
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //B.F.
        if(heights.size() == 1)return heights[0];
        int area;
        int maxArea = INT_MIN;
        for(int i = 0 ; i <heights.size()  ; i++){
            int left = 1,right = 1;
            int j = i;
            //back
            while(j > 0 && heights[i] <= heights[j-1]){
                left++;
                j--;
            }
            j = i;
            //front
            while( j < heights.size()-1 && heights[i] <= heights[j+1]){
                j++;
                right++;
            }
            // area = (heights[i]*left) + (heights[i]*right) - heights[i];
            //or
            area = heights[i]*(left+right - 1);
            maxArea = max(area,maxArea);
        }
        return maxArea;
    }   
};

//Optimized Using Stack(monotonic Stack)
