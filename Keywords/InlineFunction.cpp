#include<iostream>
using namespace std;
//pass by refernce reduce memory usage
inline getMax(int& a,int& b){
    return (a > b)?a:b;
}
int main(){
    int a = 2,b = 3;
    int ans = getMax(a,b);
    cout<<ans<<endl;
    a += 5;
    b += 3;
    ans = getMax(a,b);
    cout<<ans<<endl;
    a = 0;
    b = -2;
    ans = getMax(a,b);
    cout<<ans<<endl;

    return 0;
}