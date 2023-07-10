#include<bits\stdc++.h>
using namespace std;
class hero{
    private: 
    int health;

    public: 
    char level;
    char *name;
    //static data member
    static int timeToComplete; //does not depend on object or any other thing
    //so static keywords creates a memeber which is belong to class
    //and to access this memeber we don't need to create object

    void sethealth(int h){
        health = h;
    }

    int gethealth(){
        return health;
    }

    hero(){
        cout<<"Default constructor created\n";
        name = new char[100];
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
        cout<<"name: "<<this->name<<endl;
    }

    // //copy constructor
    // hero(hero &obj){
    //   ch address mai jo name mai value padi hai usko daalo
    //     char *ch = new char[strlen(obj.name) + 1];
    //     strcpy(ch,obj.name);

    //     //now this ke name mai ch ka address daal do
    //     this->name = ch;

    //     this->level = obj.level;
    //     this->health = obj.health;
    // }
    //destructor
    ~hero(){
        cout<<"Destructor is called\n";
    }

    //static function --> does not have this keywords and no need to create object to acces it
    //can access static members only
    static int giveTime(){
        // cout<<this->health; //error
        return timeToComplete;
    }
};
//to initialize outside the class
int hero::timeToComplete = 50; //data type then class name then :: ==> scope resolution op them static data member

int main(){
    // int hero::timeToComplete = 90; //can intialize it here
    
    cout<<hero::timeToComplete<<endl;
    cout<<hero::giveTime();

    // hero a;
    // cout<<a.timeToComplete<<endl; //not recommeded bad practise


    // hero a; //static --> it calls descrutor automatically 
    // hero *b = new hero; //dynamic //here we need to free memeory manually 
    
    // //so we need to call destructor manually using delete keyword
    // delete b; //calls destructor for b object
    return 0;
}