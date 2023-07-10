// Only the non-static data members contribute to the size of class and objects.
// This is because static members have only one instance which is shared among all objects. 
// And normal member functions are like executable code which does not have size like data members.
#include<bits/stdc++.h>
using namespace std;
class school{
    
    int a;
    char b;
    
    char* p;
    
    int a2;
    char b2;
    char c2;
    
    static int parkingLotMembers; //takes no size why obj is declared
    public:
    // school(int s,int p,int w):students(s),professors(p),workers(w){
    //     cout<<"class data member intialized\n";
    // }
    // int peopleInAclass(){
    //     return this->students+this->professors;
    // }
    // int addParkingLotMembers(int p){
    //     return p + this->parkingLotMembers;
    // }
    //takes no size why obj is declared
    void fun2(){
        //takes no size why obj is declared
        int a;
        int c;
        int d;
        int k; //takes no size
    }
};
int main(){
    school mvm;
    cout<<sizeof(mvm); //24 why due to padding and greedy alignment
    return 0;
}