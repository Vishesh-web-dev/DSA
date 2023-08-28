//lets find last occr of target

#include<bits\stdc++.h>
using namespace std;

bool pred(int m,int t,vector<int> a){
    //all the values smaller then t+1 is true
    if(a[m]<t+1){
        return true;
    }else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    vector<int> a = {1,1,2,2,3,3,3,4,5};
    int l = -1 , r = a.size();
    while(r-l > 1){
        int m = (l+r)/2;
        if(pred(m,t,a)){
            l = m;
        }else{
            r = m;
        }
    }

    //first true is our answer which is l
    if(a[l] != t){
        cout<< -1<<endl;
    }else{
        cout<<l<<" "<<a[l]<<endl;
    }
    return 0;
}