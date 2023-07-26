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
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //next smaller and prev smaller index using stack
        int n = heights.size();
        vector<int> next(n,-1);
        vector<int> prev(n,-1);
        stack<int> st;
        //use stack and store its index in the stack to track correct index
        for(int i = 0 ; i < n ; i++){
            if(st.empty()){
                st.push(i);
                continue;
            }
            while((!st.empty()) && heights[st.top()] > heights[i]){
                next[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        stack<int> st2;
        for(int i = n-1 ; i >= 0 ; i--){
            if(st2.empty()){
                st2.push(i);
                continue;
            }
            while((!st2.empty()) && heights[st2.top()] > heights[i]){
                prev[st2.top()] = i;
                st2.pop();
            }
            st2.push(i);
        }
        int area;
        int maxArea = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(next[i] == -1){
                next[i] = n;
            }
            area = heights[i]*(next[i] - prev[i]-1);
            maxArea = max(area,maxArea);
        }
        return maxArea;
    }   
};




/*g1 and g1 method*/
     int largestRectangleArea(vector<int>& heights) {
        //next smaller and prev smaller index using stack
        int n = heights.size();
        vector<int> next(n),prev(n);
        for(int i = 0 ; i < n ; i++){
            next[i] = n-i-1; //handle equal wala case as well
            prev[i] = i; 
        }
        stack<int> st,st2;
        
        for(int i = 0 ; i < n ; i++){
            while((!st.empty()) && heights[st.top()] > heights[i]){
                next[st.top()] = i- st.top() - 1; //g1
                st.pop();
            }
            st.push(i);
        }
        
        for(int i = n-1 ; i >= 0 ; i--){
             while((!st2.empty()) && heights[st2.top()] > heights[i]){
                prev[st2.top()] = st2.top() - i -1; //g2
                st2.pop();
            }
            st2.push(i);
        }
        int maxArea = INT_MIN,area;
        for(int i = 0 ; i < n ; i++){
            area = heights[i]*(prev[i] + next[i] + 1);
            maxArea = max(area,maxArea);
        }

        return maxArea;
    }   
};