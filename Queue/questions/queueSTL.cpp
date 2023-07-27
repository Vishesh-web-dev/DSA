#include<bits\stdc++.h>
using namespace std;

int main(){
    queue<int> qe;
    qe.push(17);
    qe.pop();
    if(qe.empty()){
        cout<<"Queue is empty at this point\n";
        qe.push(100);
    }
    qe.push(95);
    qe.push(90);
    qe.push(85);
    qe.push(75);
    cout<<"Front: "<<qe.front()<<" Back: "<<qe.back()<<endl;
    qe.pop();
    cout<<"Popped, now new Front: "<<qe.front()<<"\n";
    cout<<"Size of queue is: "<<qe.size()<<endl;
    return 0;
}