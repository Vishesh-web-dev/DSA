#include<iostream>
using namespace std;
int score = 15; //global variable
void a(){
    cout<<"Score in a: "<<score<<endl;
}

void b(){
    cout<<"Score in b: "<<score<<endl;
}
int main(){
    cout<<"Score in main: "<<score<<endl;
    a();b();
    return 0;
}