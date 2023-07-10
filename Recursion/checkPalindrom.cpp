#include<bits\stdc++.h>
using namespace std;
bool check(string &s,int st,int en){
    if(st >en)return true;

    if(s[st] == s[en]){
        return true && check(s,st+1,en-1);
    }else{
        return false;
    }
}

int main(){
    string s;
    // using recusion
    cin>>s;
    cout<<check(s,0,s.length() - 1);

    return 0;
}