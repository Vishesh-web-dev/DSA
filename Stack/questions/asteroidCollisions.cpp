class Solution {
private: 
    int winner(int a,int b){
        //both
        if((a > 0 && b > 0) || (a < 0 && b < 0) || (a < 0 && b > 0)){
            return 0;
        }
        //none
        if((a > b && a == abs(b)) || (b > a && b == abs(a))){
            return 1001;
        }
        //a
        else if(a > abs(b)){
            return a;
        }
        //then b
        return b;
    }
public:

    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        for(int i : asteroids){
            while((!st.empty()) && i == winner(st.top(),i)){
                st.pop();
            }
            if(st.empty()){
                st.push(i);
            }else if(winner(st.top(),i) == 0){
                st.push(i);
            }else if(winner(st.top(),i) == 1001){
                st.pop();
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};