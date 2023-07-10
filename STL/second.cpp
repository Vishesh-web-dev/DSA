#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(5);
    ls.emplace_front(8);
    ls.push_front(9);
    // ls.at(0) = 15;
    ls.pop_front();
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    deque<int> dq(5,10);

    deque<int>::iterator it = dq.begin();
    dq.push_back(5);
    dq.push_front(10);
    for(auto i: dq){
        cout<<i<<" ";
    }
    cout<<endl;
    ++it;
    cout<<*it<<" "<<*(it + 4)<<" "<<endl;
    return 0;
}