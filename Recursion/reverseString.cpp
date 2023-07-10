#include<bits\stdc++.h>
using namespace std;     
// void reverseStr(string& s,int st,int en){
//     if(st > en){return;}
//     swap(s[st],s[en]);
//     reverseStr(s,st+1,en-1); 
// }

//single pointer 
void reverseStr(string& s,int st){
    if(st > s.length() - st - 1){return;}
    swap(s[st],s[s.length() - st - 1]);
    reverseStr(s,st+1); 
}
int main(){
    string s;
    cin>>s;
    //choti oriblem last two ko swap krna bss
    int st = 0,en = s.length() - 1; 
    // reverseStr(s,0,en);
    reverseStr(s,0);

    cout<<s;
    return 0;
}