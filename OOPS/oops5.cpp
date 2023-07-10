#include<bits\stdc++.h>
using namespace std;
class hero{
    //properties
    //initially this properties are private in c++
    //so we can not access them directly ouside this class
    int privateMem = 55;
    char level;
    //so we first public it using access modifiers
    public: 
    int health;
    // double power; // 12 size ??? 
    //getter to access level indirectly
    char getlevel(){
        return level;
    }
    //setter
    void setlevel(char x){
        if(level != 'M') //condition
            level = x;
    }

};
int main(){
    hero h1;
    //access properties or data members using dot operator
    // cout<<h1.privateMem<< " "; // can't acces cause private member

    //set values
    h1.health = 70; //we can access it using dot operator

    cout<<h1.health<<" ";//it gives garbage value it not set

    //accessing private member using getter and setter
    h1.setlevel('A');
    cout<<h1.getlevel()<<" ";

    cout<<"\n";
    cout<<"Size of h1: "<<sizeof(h1); //12 why ?? read padding and greedy alignment

    return 0;
}