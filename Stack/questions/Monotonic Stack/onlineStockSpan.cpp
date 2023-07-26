class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int,int>> st;
    //why pair to store index of the current call
    int next(int price) {
        int span = 1;
        while((!st.empty()) && st.top().first <= price){
            span += st.top().second;
            st.pop();
        }
        //add to stack also empty hoga toh automatic ye execute ho jaega
        st.push({price,span}); //or st.emplace(price,span)
        //return span
        return span;
    }

};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */