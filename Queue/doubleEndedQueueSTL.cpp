#include<bits\stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(100);
    dq.push_front(10);
    dq.push_back(200);
    dq.push_front(12);
    dq.push_front(22);

    dq.pop_back();
    dq.pop_front();
    cout<<"Front :"<<dq.front();
    cout<<"\nBack :"<<dq.back();
    return 0;
}