#include<bits\stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
    st.emplace(2);
    auto k = st.size();
    cout<<"Size "<<k<<endl;
    for(int i = 0 ; i < k;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    cout<<"\nIs Empty : "<< st.empty();

    return 0;
}