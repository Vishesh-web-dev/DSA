#include<bits\stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    for(int i = 0 ; i < s1.length(); i++){
        int temp = (s1[i] - 48) ^ (s2[i] - 48);
        s1[i] = char(temp + 48);
    }
    cout<<s1;
    return 0;
}