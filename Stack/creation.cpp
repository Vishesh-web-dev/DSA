#include<bits\stdc++.h>
using namespace std;

int main(){
    stack<int> s1;
    s1.push(50);
    s1.emplace(910);
    stack<int> s2;
    s2.push(50);
    // s2.push(550);
    // s2.push(550);
    s2.push(1550);

    cout<<(s1>s2)<<endl;
    return 0;
}