#include<bits\stdc++.h>
using namespace std;
class hero{
    private: 
    int health;

    public: 
    char level;

    void sethealth(int h){
        health = h;
    }

    int gethealth(){
        return health;
    }
};
int main(){
    //Static Allocation
    hero staticVishesh;
    staticVishesh.sethealth(50);
    cout<<staticVishesh.gethealth()<<"\n";
    //dynamic Allocation
    hero *dynamicVishesh = new hero;

    //way-1
    (*dynamicVishesh).sethealth(98);
    cout<<(*dynamicVishesh).gethealth()<<"\n";
    //or
    //way-2
    dynamicVishesh->sethealth(0);
    cout<<dynamicVishesh->gethealth()<<"\n";

    delete dynamicVishesh; //deleting dynamically allocated object

    return 0;
}