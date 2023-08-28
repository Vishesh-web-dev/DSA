#include<bits\stdc++.h>
using namespace std;
#define double long double 
int main(){
    double c;
    cin>>c;
    double l = 0 , r = 10e5;
    for(int i = 0 ; i < 50 ; i++){
        double x = (l+r)/2;
        if(x*x + sqrt(x) <= c){
            l = x;
        }else{
            r = x;
        }
    }
    cout<<fixed<<setprecision(15)<<l<<endl;
    return 0;
}