#include<bits\stdc++.h>
using namespace std;

int main(){
    //First In First Out
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.emplace(0);

    cout<<q.front()<<" "<<q.back()<<"\n"; //5 0 
    q.pop(); //first = 4
    q.front() += 2; // 6
    q.back() += 10; // 10
    cout<<q.front()<<" "<<q.back(); // 6 10 
    return 0;
}