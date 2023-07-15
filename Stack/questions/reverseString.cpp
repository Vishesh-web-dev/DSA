#include<bits\stdc++.h>
using namespace std;
void reverse(string &s){
    stack<char> st;
    for(int i = 0 ; i < s.size() ; i++){
        st.push(s[i]);
    }
    int i = 0;
    while(!st.empty()){
        s[i] = st.top();
        st.pop();
        i++;
    }
}
int main(){
    string s;
    cin>>s;
    reverse(s);
    cout<<s;
}