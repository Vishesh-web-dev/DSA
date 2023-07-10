#include<bits\stdc++.h>
// #include"heroClass.h"
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

    // constructor
    hero(){ //default constructor
        cout<<"Constructor is called and object is created\n";
        cout<<"Current object address: "<<this<<'\n';
    }

    //parameterized cons
    hero(int health){
        this->health = health;
        //or
        // (*this).health = health;
    }

    //2.0 can have multiple constructrs 
    hero(int health,char level){
        this->health = health;
        this->level = level;
    }

    //copy constructor is already inbuild but we can create by ourselfe also
    //also without '&' it gives error ???
    //without & the constructer send copy and this copy calls 
    // another copy consructor and it creates infinte loop
    //hence we have to pass it by reference 
    hero(hero& x){
        this->health = x.health;
        this->level = x.level;
    }
};
int main(){
    // cout<<"constructor is not called yet...\n";
    hero aps;
    // cout<<"Constructor is already been called\n";

    hero *ap2 = new hero; // constructor is also called for this 

    //parameterized
    hero paraObj(50);
    cout<<paraObj.gethealth();
    cout<<"\n";
    hero *paraObj2 = new hero(56);
    cout<<paraObj2->gethealth()<<'\n'; 

    cout<<"Address fo object aps and ap2: "<<&aps<< "\t"<<&ap2<<"\n";
    // cout<<'\n'; //this also works


    //two parameterized same class 
    hero obj(100,'Z');
    cout<<obj.level;


    //imp***
    hero vishesh; //this will give error if hero class dont have default constructer
    //cause we have created paramerterized constructer and if we create an object which is created by
    // default constructor then it will give error due to absence of default constructor 
    // due ot prar cons.. the default constructor in background will die
    //hence we have to mention its definiation


    //copy constructor //it is inbuild 
    // hero obj2(obj);
    // cout<<"Same as obj1 : "<<obj2.gethealth();

    //our copy constructor
    hero obj3(obj);
    cout<<"obj3 is created by our own copy constructor :"<<obj3.gethealth();
    //we can create our own copy constructor
    delete paraObj2; //deleting dynamically allocated object
    delete ap2;
    return 0;
}