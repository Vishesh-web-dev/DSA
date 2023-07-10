#include<bits\stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(5); // 5
    pq.push(2); // 5 2 
    pq.push(10); // 10 5 2
    pq.push(8); // 10 8 5 2
    pq.push(3); // 10 8 5 3 2

    cout<<pq.top()<<" "; // 10
    pq.pop(); // 10
    cout<<pq.top()<<endl;; // 8

    //minimm heap
    //reverse order
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(5); // 5
    pq2.push(2); // 2 5
    pq2.push(10); // 2 5 10
    pq2.push(8); // 2 5 8 10
    pq2.push(3); // 2 3 5 8 10

    cout<<pq2.top()<<" "; // 2
    pq2 .pop(); // 2
    cout<<pq2.top(); // 3
    return 0;
}