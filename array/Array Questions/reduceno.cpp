#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k1,k2;
    k1 = 101,k2 = 101;
    n = 3;

    while (k1 > n)
    {
        k1 = k1 - n;
    }
    
    k2 = k2%n;

    
    cout<<k1<<" "<<k2<<endl;
    vector<int> nums = {0};
    
    
    return 0;
}