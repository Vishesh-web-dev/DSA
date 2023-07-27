class MinStack {
    stack<long long int> st;
    long long int min;
public:
    MinStack() {   
        while(!st.empty()){st.pop();} //stack should be empty when initialized. 
        min = INT_MAX;
    }
    void push(int val) {
        if(st.empty()){
            min = val;
            st.push(val);
        }
        else {
            //if val is lesser then min update min and push modified value
            if (val < min) {
                st.push(2LL*val - min);
                min = val;
            } else {
                st.push(val);
            }
        }
    }
    void pop() {
        long long int topElem = st.top();
        //agar top modified hai toh rollback
        //i.e top < min
        if(topElem < min){
            min = 2LL*min-topElem;
        }
        //pop top element
        st.pop();
    }
    int top() {
        long long int topElem = st.top();
        //agar top modified hai 
        //i.e top < min
        if(topElem < min){
            return min;
        }else{
            return st.top();
        }
    }
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */